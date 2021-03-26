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
        EditorGUILayout.HelpBox("This script creates and joins random rooms", MessageType.Info);

        RoomManager roomManager = (RoomManager)target;
        if(GUILayout.Button("Join Random room"))
        {
            roomManager.JoinRandomRoom();
        }
        if (GUILayout.Button("Join Main room"))
        {
            roomManager.JoinMainRoom();
        }

    }
}
