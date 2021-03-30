using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.XR.Interaction.Toolkit;
public class PlayerNetworkSetup : MonoBehaviourPunCallbacks
{

    public GameObject LocalXRRigGameobject;
    public GameObject AvatarHeadGameobject;
    public GameObject AvatarBodyGameobject;
    public GameObject MainAvatarGameObject;

    // Start is called before the first frame update
    void Start()
    {
        if (photonView.IsMine)
        {
            //my player
            LocalXRRigGameobject.SetActive(true);
            gameObject.GetComponent<MovementController>().enabled = true;
            gameObject.GetComponent<AvatarInputConverter>().enabled = true;

            SetLayerRecursively(AvatarHeadGameobject,11);
            SetLayerRecursively(AvatarBodyGameobject,11);
            Debug.Log("MyPlayer logged");

            TeleportationArea[] teleportationAreas = GameObject.FindObjectsOfType<TeleportationArea>();
            if (teleportationAreas.Length>0)
            {
                Debug.Log("Found " + teleportationAreas.Length + " teleportation area.");
                foreach(var item in teleportationAreas)
                {
                    item.teleportationProvider = LocalXRRigGameobject.GetComponent<TeleportationProvider>();
                }
            }
            MainAvatarGameObject.AddComponent<AudioListener>();
        }
        else
        {
            //remote player
            LocalXRRigGameobject.SetActive(false);
            gameObject.GetComponent<MovementController>().enabled = false;
            gameObject.GetComponent<AvatarInputConverter>().enabled = false;

            SetLayerRecursively(AvatarHeadGameobject, 0);
            SetLayerRecursively(AvatarBodyGameobject, 0);
            Debug.Log("Otherplayer logged");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void SetLayerRecursively(GameObject go, int layerNumber) //taken from IRONHEAD games
    {
        if (go == null) return;
        foreach (Transform trans in go.GetComponentsInChildren<Transform>(true))
        {
            trans.gameObject.layer = layerNumber;
        }
    }
}
