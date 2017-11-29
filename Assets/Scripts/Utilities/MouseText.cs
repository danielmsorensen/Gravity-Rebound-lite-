using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MouseText : MonoBehaviour {

    public RectTransform[] elements;
    [Space]
    public Transform message;
    
    void Update() {
        foreach (RectTransform e in elements) {
            if (MouseOver(e) && e.gameObject.activeInHierarchy) {
                message.gameObject.SetActive(true);
                message.position = Input.mousePosition;

                return;
            }
        }

        message.gameObject.SetActive(false);
    }

    public static bool MouseOver(RectTransform transform) {
        Vector2 mousePosition = Input.mousePosition;
        Vector3[] worldCorners = new Vector3[4];
        transform.GetWorldCorners(worldCorners);

        // Corners:
        // 1 2
        // 0 3

        if (mousePosition.x >= worldCorners[0].x && mousePosition.x < worldCorners[2].x && mousePosition.y >= worldCorners[0].y && mousePosition.y < worldCorners[2].y) {
            return true;
        }
        else {
            return false;
        }
    }
}
