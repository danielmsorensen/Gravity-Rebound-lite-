using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CanvasGroup))]
public class DisableCanvasGroup : MonoBehaviour {

    CanvasGroup group;

    bool interactable;

    void Awake() {
        group = GetComponent<CanvasGroup>();
        interactable = group.interactable;
    }

    void Start() {
        StartCoroutine(SetInteractable());
    }

    IEnumerator SetInteractable() {
        group.interactable = !interactable;
        yield return null;
        group.interactable = interactable;
    }
}
