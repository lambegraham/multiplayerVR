using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class InputListener : MonoBehaviour
{

    List<InputDevice> inputDevices; //Create list of InputDevices
    InputDeviceCharacteristics InputDeviceCharacteristics;
    public XRNode controllerNode;

    private void Awake()
    {
        inputDevices = new List<InputDevice>(); //Initilize List
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        /*
        InputDeviceCharacteristics = UnityEngine.XR.InputDeviceCharacteristics.HeldInHand | InputDeviceCharacteristics.Controller | InputDeviceCharacteristics.Left; //Left Controller Logged
        InputDevices.GetDevicesAtXRNode(controllerNode, inputDevices);
        foreach(InputDevice inputDevice in inputDevices)
        {
            Debug.Log("Device found: " + inputDevice.name); //Log device name
            bool inputValue;
            if (inputDevice.TryGetFeatureValue(CommonUsages.primaryButton,out inputValue) && inputValue)
            {
                Debug.Log("Pressed primary button");
            }
        }
        */
    }
}
