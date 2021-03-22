using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{

    public GameObject UI_Gameobject;
    // Start is called before the first frame update
    void Start()
    {
        UI_Gameobject.SetActive(false);
    }

    public void Button1Clicked()
    {
        Debug.Log("Button 1 clicked");
    }
    
    public void Button2Clicked()
    {
        Debug.Log("Button 2 clicked");
    }

    public void Button3Clicked()
    {
        Debug.Log("Button 3 clicked");
    }

}
