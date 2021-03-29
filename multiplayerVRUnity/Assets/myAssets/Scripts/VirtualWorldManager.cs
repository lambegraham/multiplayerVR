using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class VirtualWorldManager : MonoBehaviourPunCallbacks
{

    public static VirtualWorldManager Instance;

    private void Awake() //Unity Singleton implementation https://wiki.unity3d.com/index.php/Singleton
    {
        if(Instance!=null && Instance!=this)
        {
            Destroy(this.gameObject);
            return;
        }
        Instance = this;
    }
    public void LeaveRoomAndLoadHome()
    {
        PhotonNetwork.LeaveRoom();
    }
    #region Photon Callback Methods
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);
        Debug.Log(newPlayer.NickName + " connected. Player count: " + PhotonNetwork.CurrentRoom.PlayerCount);
    }

    public override void OnLeftRoom()
    {
        base.OnLeftRoom();
        PhotonNetwork.Disconnect();
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        base.OnDisconnected(cause);
        PhotonNetwork.LoadLevel("HomeScene");
    }
    #endregion
}