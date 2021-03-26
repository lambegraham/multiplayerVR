using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;


public class LoginManager : MonoBehaviourPunCallbacks //Inherits PUN Callbacks class
{
    public TMP_InputField PlayerName_InputField;

    #region UNITY methods
    // Start is called before the first frame update
    void Start()
    {
        //PhotonNetwork.ConnectUsingSettings(); //Connect to Photon servers using default settings
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    #endregion

    #region UI Callback methods
    public void ConnectToPhotonServer()
    {
        if (PlayerName_InputField != null)
        {
            PhotonNetwork.NickName = PlayerName_InputField.text;
            PhotonNetwork.ConnectUsingSettings(); //Connect to Photon servers using default settings
        }
    }
    #endregion

    #region Photon Callback Methods

    public override void OnConnected()
    {
        base.OnConnected();
        Debug.Log("OnConnected Called.");
    }

    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        Debug.Log("OnConnectedToMaster Called. Playername: "+ PhotonNetwork.NickName);
        PhotonNetwork.LoadLevel("HomeScene");

    }
    #endregion
}
