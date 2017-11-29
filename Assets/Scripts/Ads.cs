using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR || UNITY_ANDROID || UNITY_IOS
using UnityEngine.Advertisements;
#endif

public static class Ads {

    public static void Init() {
#if UNITY_EDITOR || UNITY_ANDROID || UNITY_IOS
        if (!Advertisement.isInitialized) {
            Advertisement.Initialize((Application.platform == RuntimePlatform.Android) ? "1187216" : "1187217", Application.isEditor);
        }
#endif
    }

    public static void ShowAd() {
#if UNITY_EDITOR || UNITY_ANDROID || UNITY_IOS
        if (Advertisement.IsReady()) {
            Advertisement.Show();
        }
        else {
            Debug.LogWarning("Ads not ready");
        }
#endif
    }
}
