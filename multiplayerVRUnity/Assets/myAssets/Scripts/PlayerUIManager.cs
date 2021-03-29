using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PlayerUIManager : MonoBehaviour
{

    public GameObject Player_UIMenu;
    public GameObject Button_GoHome;
    // Start is called before the first frame update
    void Start()
    {
        Player_UIMenu.SetActive(false);
        Button_GoHome.GetComponent<Button>().onClick.AddListener(VirtualWorldManager.Instance.LeaveRoomAndLoadHome);
    }
}
