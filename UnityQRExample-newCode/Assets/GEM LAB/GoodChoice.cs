using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GoodChoice : MonoBehaviour
{
    public TextMesh text1;
    public TextMesh text2;
    public TextMesh text3;

    public void OnbuttonClickEvent()
    {
        text1.gameObject.SetActive(false);
        text2.gameObject.SetActive(false);
        text3.gameObject.SetActive(true);
    }
}
