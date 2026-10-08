#!/usr/bin/env bash
# Installs a headless Unity editor with Android build support (SDK, NDK, OpenJDK)
# for Claude Code cloud sessions. Self-contained, so it can be pasted into the
# environment's setup script as-is.
#
#   UNITY_VERSION  editor version (default: read from ProjectSettings/ProjectVersion.txt,
#                  else 6000.2.8f1)
#   UNITY_ROOT     install location (default: /opt/unity)
#   UNITY_LICENSE  contents of Unity_lic.ulf; written where the editor looks for it
#
# The editor ends up at $UNITY_ROOT/<version>/Editor/Unity, symlinked to /usr/local/bin/unity.
set -euo pipefail

UNITY_ROOT="${UNITY_ROOT:-/opt/unity}"
if [ -z "${UNITY_VERSION:-}" ]; then
    for f in ProjectSettings/ProjectVersion.txt "${CLAUDE_PROJECT_DIR:-.}/ProjectSettings/ProjectVersion.txt"; do
        if [ -f "$f" ]; then
            UNITY_VERSION="$(sed -n 's/^m_EditorVersion: *//p' "$f" | tr -d '\r')"
            break
        fi
    done
fi
UNITY_VERSION="${UNITY_VERSION:-6000.2.8f1}"
INSTALL="$UNITY_ROOT/$UNITY_VERSION"
ANDROID="$INSTALL/Editor/Data/PlaybackEngines/AndroidPlayer"

log() { echo "[install-unity] $*"; }

install_license() {
    [ -n "${UNITY_LICENSE:-}" ] || { log "UNITY_LICENSE not set; editor will open projects but cannot build"; return 0; }
    local dir="$HOME/.local/share/unity3d/Unity"
    mkdir -p "$dir"
    printf '%s' "$UNITY_LICENSE" > "$dir/Unity_lic.ulf"
    chmod 600 "$dir/Unity_lic.ulf"
    log "licence written to $dir/Unity_lic.ulf"
}

if [ -x "$INSTALL/Editor/Unity" ] && [ -d "$ANDROID/SDK/platforms" ]; then
    log "Unity $UNITY_VERSION already installed at $INSTALL"
    ln -sf "$INSTALL/Editor/Unity" /usr/local/bin/unity
    install_license
    exit 0
fi

missing=()
for tool in curl unzip cpio 7z xz python3; do command -v "$tool" >/dev/null || missing+=("$tool"); done
if [ ${#missing[@]} -gt 0 ]; then
    log "installing ${missing[*]}"
    export DEBIAN_FRONTEND=noninteractive
    apt-get update -q >/dev/null
    apt-get install -y -q curl unzip cpio p7zip-full xz-utils python3 >/dev/null
fi

WORK="$(mktemp -d)"
trap 'rm -rf "$WORK"' EXIT

# Resolve download URLs (editor, Android module and its SDK/NDK/JDK parts) from Unity's release API.
log "looking up Unity $UNITY_VERSION"
curl -fsSL --retry 3 \
    "https://services.api.unity.com/unity/editor/release/v1/releases?version=$UNITY_VERSION&platform=LINUX&architecture=X86_64&limit=1" \
    -o "$WORK/release.json"
python3 -I - "$WORK/release.json" > "$WORK/urls.tsv" <<'EOF'
import json, sys
release = json.load(open(sys.argv[1]))["results"][0]["downloads"][0]
print("editor\t" + release["url"])
def walk(modules):
    for m in modules:
        if m["id"] == "android" or m["id"].startswith(("android-open-jdk", "android-sdk", "android-ndk")):
            print(m["id"] + "\t" + m["url"])
        walk(m.get("subModules", []))
walk(release["modules"])
EOF

mkdir -p "$WORK/dl"
log "downloading $(wc -l < "$WORK/urls.tsv") packages"
cut -f2 "$WORK/urls.tsv" | (cd "$WORK/dl" && xargs -P 4 -n 1 curl -fsSL -O --retry 3)
file_for() { echo "$WORK/dl/$(basename "$(awk -F'\t' -v id="$1" '$1==id {print $2}' "$WORK/urls.tsv")")"; }
file_like() { echo "$WORK/dl/$(basename "$(awk -F'\t' -v p="$1" 'index($1,p)==1 {print $2; exit}' "$WORK/urls.tsv")")"; }

log "extracting editor"
rm -rf "$INSTALL"
mkdir -p "$INSTALL"
tar -xJf "$(file_for editor)" -C "$INSTALL"
rm -f "$(file_for editor)"

# Unity ships the Linux Android module as a macOS .pkg: a xar archive holding a cpio payload.
log "extracting Android module"
mkdir -p "$WORK/pkg" "$ANDROID"
7z x -y -o"$WORK/pkg" "$(file_for android)" >/dev/null
payload="$(find "$WORK/pkg" -maxdepth 2 -name 'Payload*' -type f | head -n1)"
(cd "$ANDROID" && cpio -id --quiet < "$payload")
rm -rf "$WORK/pkg" "$(file_for android)"

log "extracting OpenJDK, SDK and NDK"
mkdir -p "$ANDROID/OpenJDK" "$ANDROID/SDK/platforms" "$ANDROID/SDK/build-tools" "$ANDROID/SDK/cmdline-tools" "$ANDROID/NDK"
unzip -q "$(file_like android-open-jdk)" -d "$ANDROID/OpenJDK"
unzip -q "$(file_like android-sdk-platform-tools)" -d "$ANDROID/SDK"
while IFS=$'\t' read -r id url; do
    case "$id" in
        android-sdk-platforms-*) unzip -q -o "$WORK/dl/$(basename "$url")" -d "$ANDROID/SDK/platforms" ;;
    esac
done < "$WORK/urls.tsv"
# Archives unpack under a generic folder name; rename to what Unity expects.
bt_id="$(awk -F'\t' 'index($1,"android-sdk-build-tools-")==1 {print $1; exit}' "$WORK/urls.tsv")"
unzip -q "$(file_for "$bt_id")" -d "$WORK/bt"
mv "$WORK/bt/"* "$ANDROID/SDK/build-tools/${bt_id#android-sdk-build-tools-}"
clt_id="$(awk -F'\t' 'index($1,"android-sdk-command-line-tools-")==1 {print $1; exit}' "$WORK/urls.tsv")"
unzip -q "$(file_for "$clt_id")" -d "$WORK/clt"
mv "$WORK/clt/cmdline-tools" "$ANDROID/SDK/cmdline-tools/${clt_id#android-sdk-command-line-tools-}"
unzip -q "$(file_like android-ndk)" -d "$WORK/ndk"
mv "$WORK/ndk/"*/* "$ANDROID/NDK/"

log "accepting Android SDK licences"
JAVA_HOME="$ANDROID/OpenJDK" yes | \
    "$ANDROID/SDK/cmdline-tools/${clt_id#android-sdk-command-line-tools-}/bin/sdkmanager" \
    --sdk_root="$ANDROID/SDK" --licenses >/dev/null 2>&1 || true

ln -sf "$INSTALL/Editor/Unity" /usr/local/bin/unity
install_license
log "installed Unity $("$INSTALL/Editor/Unity" -version 2>/dev/null | tail -n1) at $INSTALL"
