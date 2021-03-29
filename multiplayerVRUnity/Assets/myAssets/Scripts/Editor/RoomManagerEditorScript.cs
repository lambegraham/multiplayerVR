using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(RoomManager))]

public class RoomManagerEditorScript : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        DrawDefaultInspector(); //Makes sure default inspector is displayed
        EditorGUILayout.HelpBox("This script creates and joins random rooms", MessageType.Info);

        RoomManager roomManager = (RoomManager)target;
        if (GUILayout.Button("Join Random room"))
        {
            roomManager.JoinRandomRoom();
        }
        if (GUILayout.Button("Join Main room"))
        {
            roomManager.JoinMainRoom();
        }

        if (GUILayout.Button("Join School Room"))
        {
            roomManager.onEnterRoomButtonClicked_School();
        }
        if (GUILayout.Button("Join Outdoor Room"))
        {
            roomManager.onEnterRoomButtonClicked_Outdoor();
        }
    }
}
