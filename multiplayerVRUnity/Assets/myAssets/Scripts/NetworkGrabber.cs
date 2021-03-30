using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class NetworkGrabber : MonoBehaviourPunCallbacks, IPunOwnershipCallbacks
{

    PhotonView photonView;
    Rigidbody rb;
    public bool isBeingHeld = false;

    private void Awake()
    {
        photonView = GetComponent<PhotonView>();
    }

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        if (isBeingHeld)
        {
            rb.isKinematic = true;
            gameObject.layer = 13; //inHand layer
        }
        else
        {
            rb.isKinematic = false;
            gameObject.layer = 8;
        }
    }

    public void OnSelectEnter()
    {
        Debug.Log("Object Grabbed");
        photonView.RPC("StartNetworkedGrab", RpcTarget.AllBuffered);

        if(photonView.Owner == PhotonNetwork.LocalPlayer)
        {
            Debug.Log("Object already owned");
        }
        else
        {
            TransferOwnership();
        }
    }
    public void OnSelectExit()
    {
        Debug.Log("Object Released");
    }

    private void TransferOwnership()
    {
        photonView.RequestOwnership();
    }

    public void OnOwnershipRequest(PhotonView targetView, Player requestingPlayer)
    {
        if (targetView != photonView)
        {
            return;
        }
        Debug.Log("Ownership requested for: " + targetView.name + " from " + requestingPlayer.NickName);
        photonView.TransferOwnership(requestingPlayer);
    }

    public void OnOwnershipTransfered(PhotonView targetView, Player previousOwner)
    {
        Debug.Log("Transfer is completed. New Owner: " + targetView.Owner.NickName);
    }

    [PunRPC]
    public void StartNetworkedGrabbing()
    {
        isBeingHeld = true;
    }

    [PunRPC]
    public void StopNetworkedGrabbing()
    {
        isBeingHeld = false;
    }
    public void OnOwnershipTransferFailed(PhotonView targetView, Player senderOfFailedRequest)
    {
        throw new System.NotImplementedException();
    }
}
