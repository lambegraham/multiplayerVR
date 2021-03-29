using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System;
using TMPro;

public class RoomManager : MonoBehaviourPunCallbacks
{
    [SerializeField]
    TextMeshProUGUI OccupancyRateText_School;
    [SerializeField]
    TextMeshProUGUI OccupancyRateText_Outdoor;

    string mapType;
    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.AutomaticallySyncScene = true;
        if (!PhotonNetwork.IsConnectedAndReady)
        {
            PhotonNetwork.ConnectUsingSettings();
        }
        else
        {
            PhotonNetwork.JoinLobby();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    #region UI Callback Methods

    public void JoinMainRoom()
    {
        PhotonNetwork.JoinRoom("MainRoom");
    }
    public void JoinRandomRoom()
    {
        PhotonNetwork.JoinRandomRoom();
    }

    public void onEnterRoomButtonClicked_Outdoor()
    {
        mapType = MultiplayerVRConstants.MAP_VALUE_OUTDOOR;
        ExitGames.Client.Photon.Hashtable expectedRoomProperties = new ExitGames.Client.Photon.Hashtable() 
        { { MultiplayerVRConstants.MAP_KEY, mapType } };
        PhotonNetwork.JoinRandomRoom(expectedRoomProperties, 0);
    }

    public void onEnterRoomButtonClicked_School()
    {
        mapType = MultiplayerVRConstants.MAP_VALUE_SCHOOL;
        ExitGames.Client.Photon.Hashtable expectedRoomProperties = new ExitGames.Client.Photon.Hashtable()
        { { MultiplayerVRConstants.MAP_KEY, mapType } };
        PhotonNetwork.JoinRandomRoom(expectedRoomProperties, 0);
    }
    #endregion

    #region Photon Callback Methods
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        //base.OnJoinRandomFailed(returnCode, message);
        Debug.Log(message);
        CreateAndJoinRoom();
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        base.OnJoinRoomFailed(returnCode, message);
        CreateAndJoinMainRoom();
    }

    public override void OnCreatedRoom()
    {
        base.OnCreatedRoom();
        Debug.Log("A room was created with name: " + PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        Debug.Log("Player " + PhotonNetwork.NickName + " joined " + PhotonNetwork.CurrentRoom.Name + ". Player count: " + PhotonNetwork.CurrentRoom.PlayerCount);
        if (PhotonNetwork.CurrentRoom.CustomProperties.ContainsKey(MultiplayerVRConstants.MAP_KEY))
        {
            object mapType;
            if (PhotonNetwork.CurrentRoom.CustomProperties.TryGetValue(MultiplayerVRConstants.MAP_KEY, out mapType))
            {
                Debug.Log("Joined room with map: "+(string)mapType);
                if((string)mapType == MultiplayerVRConstants.MAP_VALUE_SCHOOL)
                {
                    // load school
                    PhotonNetwork.LoadLevel("World_School");
                }
                else if((string)mapType == MultiplayerVRConstants.MAP_VALUE_OUTDOOR)
                {
                    PhotonNetwork.LoadLevel("World_Outdoor");
                }
            }
        }
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        base.OnPlayerEnteredRoom(newPlayer);

        Debug.Log(newPlayer.NickName + " connected. Player count: " + PhotonNetwork.CurrentRoom.PlayerCount);
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList) //Called when Room List is updated
    {
        base.OnRoomListUpdate(roomList);
        if(roomList.Count == 0)
        {
            //There is no room
            OccupancyRateText_School.text = 0 + "/ " + 20;
            OccupancyRateText_Outdoor.text = 0 + "/ " + 20;

        }
            foreach (RoomInfo room in roomList)
            {
                Debug.Log(room.Name);
                if (room.Name.Contains(MultiplayerVRConstants.MAP_VALUE_OUTDOOR))
                {
                    Debug.Log("Room is Outdoor. Playercount is: " + room.PlayerCount);
                    OccupancyRateText_Outdoor.text = room.PlayerCount + " / " + 20;
                }
                if (room.Name.Contains(MultiplayerVRConstants.MAP_VALUE_SCHOOL))
                {
                    Debug.Log("Room is School. Playercount is: " + room.PlayerCount);
                    OccupancyRateText_School.text = room.PlayerCount + " / " + 20;
                }
            }
    }

    public override void OnJoinedLobby()
    {
        base.OnJoinedLobby();
        Debug.Log("Lobby has been joined.");
    }

    public override void OnConnectedToMaster()
    {
        base.OnConnectedToMaster();
        Debug.Log("Connected to servers");
        PhotonNetwork.JoinLobby();
    }
    #endregion

    #region Private Methods
    private void CreateAndJoinRoom()
    {
        string randomRoom = "Room_" + mapType;
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 20;

        string[] roomPropsInLobby = {MultiplayerVRConstants.MAP_KEY};


        ExitGames.Client.Photon.Hashtable customRoomProperties = new ExitGames.Client.Photon.Hashtable() 
        { {MultiplayerVRConstants.MAP_KEY, mapType} };

        roomOptions.CustomRoomPropertiesForLobby = roomPropsInLobby;
        roomOptions.CustomRoomProperties = customRoomProperties;

        PhotonNetwork.CreateRoom(randomRoom, roomOptions);
    }

    private void CreateAndJoinMainRoom()
    {
        string roomName = "MainRoom";
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 20;

        PhotonNetwork.CreateRoom(roomName, roomOptions);
    }
    #endregion

}
