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

    bool firstTake = false;

    private void OnEnable()
    {
        firstTake = true;
    }
    private void Awake()
    {
        photonView = GetComponent<PhotonView>();

        StoredPos_LeftHand = leftHand.localPosition;
        NetworkPos_LeftHand = Vector3.zero;
        NetworkRotation_LeftHand = Quaternion.identity;

        StoredPos_RightHand = rightHand.localPosition;

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!photonView.IsMine) 
        {
            leftHand.localPosition = Vector3.MoveTowards(leftHand.localPosition, NetworkPos_LeftHand, Distance_LeftHand * (1.0f / PhotonNetwork.SerializationRate));
            leftHand.localRotation = Quaternion.RotateTowards(leftHand.localRotation, NetworkRotation_LeftHand, Angle_LeftHand * (1.0f / PhotonNetwork.SerializationRate));
        }

    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.IsWriting)
        {
            //Send left hand pos data

            Direction_LeftHand = leftHand.localPosition - StoredPos_LeftHand;
            StoredPos_LeftHand = leftHand.transform.localPosition;

            stream.SendNext(leftHand.localPosition);
            stream.SendNext(Direction_LeftHand);

            //Send left hand rotation data 
            stream.SendNext(leftHand.localRotation);

        }
        else
        {
            //Recieve left hand position data
            NetworkPos_LeftHand = (Vector3)stream.ReceiveNext();
            Direction_LeftHand = (Vector3)stream.ReceiveNext();

            if (firstTake)
            {
                leftHand.localPosition = NetworkPos_LeftHand;
                Distance_LeftHand = 0;
            }

            else
            {
                float lag = Mathf.Abs((float)(PhotonNetwork.Time - info.SentServerTime));
                //PhotonNetwork.Time syncs time for all players
                NetworkPos_LeftHand += Direction_LeftHand * lag;
                Distance_LeftHand = Vector3.Distance(leftHand.localPosition, NetworkPos_LeftHand);
            }

            NetworkRotation_LeftHand = (Quaternion)stream.ReceiveNext();
            if (firstTake)
            {
                Angle_LeftHand = 0;
                leftHand.localRotation = NetworkRotation_LeftHand;
            }
            else
            {
                Angle_LeftHand = Quaternion.Angle(leftHand.localRotation, NetworkRotation_LeftHand);
            }
            if (firstTake)
            {
                firstTake = false;
            }
        }
    }
}
