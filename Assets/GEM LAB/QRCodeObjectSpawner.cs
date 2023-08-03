using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QRCodeObjectSpawner : MonoBehaviour
{
    public List<GameObject> ARTargets;
    [Range(0, 4)]
    public int qrRemovalTimeInSeconds;

    private Microsoft.MixedReality.SampleQRCodes.QRCode qrCode;

    private Dictionary<string, int> nameToIndexMap = new Dictionary<string, int>(StringComparer.InvariantCultureIgnoreCase)
    {
        {"A",0},
        {"B",1},
        {"http://en.m.wikipedia.org",2}
    };

    private bool haveInstantiatedContent = false;
    //Yeah yeah yeah, null initialization is bad... it is also 23:13...
    private GameObject contentGameObject = null;

    private void Start()
    {
               

    }

    private void Update()
    {
        //Hint: You can enable this to remove old QR codes from the scene
        //TBF, I have not tested it; there is more info below and probably a beter way to do it with the QR Manager
        //if (qrCode.qrCode != null)
        //{
        //    //Check if the QR code is old.. if it is, delete it from the scene
        //    var timeDiffernece = DateTimeOffset.Now - qrCode.qrCode.LastDetectedTime;
        //    if (timeDiffernece.Seconds > 4)
        //    {
        //        Destroy(this.gameObject);
        //    }
        //}

        if (!haveInstantiatedContent)
        {
            //The naming on this sucks...
            qrCode = GetComponent<Microsoft.MixedReality.SampleQRCodes.QRCode>();
            
            if (qrCode.qrCode != null)
            {
                //I would also recomend not instantiating content in old qr codes (from pevious runs)
                //you can add a time check using and && operator AFTER the null check
                //HERE
                //A beter option is to modify the tracker (from MS) to not track any code that is older than application start time
                //See here: https://learn.microsoft.com/en-ca/windows/mixed-reality/develop/advanced-concepts/qr-code-tracking-overview#managing-qr-code-data


                //Get the QR Code text and take action based on it
                //Right now this is crap and for illustration only, you should remap this
                if (nameToIndexMap.ContainsKey(qrCode.qrCode.Data))
                {
                    contentGameObject = Instantiate(ARTargets[nameToIndexMap[qrCode.qrCode.Data]]);
                    contentGameObject.transform.position = transform.position;
                    //TODO: You might have to adjust the orientation here
                    contentGameObject.transform.rotation = transform.rotation;

                    //The "Cube" GO is scalled according to the QR code's size (*AKA Distance*)
                    //Let's make our content a child of the "CUBE"
                    contentGameObject.transform.parent = gameObject.transform.GetChild(1).transform;
                    haveInstantiatedContent = true;
                }
            }
            
        }

        
    }

}
