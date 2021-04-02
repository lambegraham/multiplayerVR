using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class NetworkGrabber : MonoBehaviourPunCallbacks, IPunOwnershipCallbacks
{

    PhotonView myPhotonView;
    Rigidbody rb;
    public bool isBeingHeld = false;

    private void Awake()
    {
        myPhotonView = GetComponent<PhotonView>();
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
            gameObject.layer = 12; //inHand layer
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
        myPhotonView.RPC("StartNetworkedGrab", RpcTarget.AllBuffered);

        if(myPhotonView.Owner == PhotonNetwork.LocalPlayer)
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
        myPhotonView.RequestOwnership();
    }

    public void OnOwnershipRequest(PhotonView targetView, Player requestingPlayer)
    {
        if (targetView != myPhotonView)
        {
            return;
        }
        Debug.Log("Ownership requested for: " + targetView.name + " from " + requestingPlayer.NickName);
        myPhotonView.TransferOwnership(requestingPlayer);
    }

    public void OnOwnershipTransfered(PhotonView targetView, Player previousOwner)
    {
        Debug.Log("Transfer is completed. New Owner: " + targetView.Owner.NickName);
    }

    [PunRPC]
    public void StartNetworkedGrab()
    {
        isBeingHeld = true;
    }

    [PunRPC]
    public void StopNetworkedGrab()
    {
        isBeingHeld = false;
    }
    public void OnOwnershipTransferFailed(PhotonView targetView, Player senderOfFailedRequest)
    {
        throw new System.NotImplementedException();
    }
}
