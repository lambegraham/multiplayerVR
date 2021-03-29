using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class HandSync : MonoBehaviour, IPunObservable
{

    //Hands
    public Transform leftHand;
    public Transform rightHand;

    private PhotonView photonView;

    //leftHand
    private float Distance_LeftHand;
    
    //Position
    private Vector3 Direction_LeftHand;
    private Vector3 NetworkPos_LeftHand;
    private Vector3 StoredPos_LeftHand;

    //Rotation
    private Quaternion NetworkRotation_LeftHand;
    private float Angle_LeftHand;

    //rightHand
    private float Distance_RightHand;

    //Position
    private Vector3 Direction_RightHand;
    private Vector3 NetworkPos_RightHand;
    private Vector3 StoredPos_RightHand;

    //Rotation
    private Quaternion NetworkRotation_RightHand;
    private float Angle_RightHand;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {

        }
        else
        {

        }
    }
}
