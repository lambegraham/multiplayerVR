using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{

    public GameObject UI_Gameobject;
    public GameObject UI_JoinMenu;


    // Start is called before the first frame update
    void Start()
    {
        UI_Gameobject.SetActive(false);
        UI_JoinMenu.SetActive(false);
    }

    public void Button1Clicked()
    {
        Debug.Log("Button 1 clicked");
        if(UI_Gameobject != null)
        {
            UI_JoinMenu.SetActive(true);
        }
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
