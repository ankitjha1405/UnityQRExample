using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; // Added to use UI components like Button


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
        {"C",2},
        {"D",3},
        {"E",4},
        {"F",5},
        {"G",6},
        {"H",7},
        {"I",8},
        {"J",9},
        {"K",10},
        {"L",11},
        {"Maze",12}
    };

    private bool haveInstantiatedContent = false;
    //Yeah yeah yeah, null initialization is bad... it is also 23:13...
    //private GameObject contentGameObject = null;

    [SerializeField] // Added this line to serialize the field
    public GameObject coffeeMug1;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject coffeeMug2;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject coffeeMug3;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject coffeeMug4;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject bookShelve;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject chest;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject clifford;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject crawley;
   

    [SerializeField] // Added this line to serialize the field
    private GameObject curtains;
    
    [SerializeField] // Added this line to serialize the field
    private GameObject door;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject qrCodeObject;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject redBear;
    

    [SerializeField] // Added this line to serialize the field
    private GameObject bubbleGum;




    private void DisableAllGameObjects()
    {
        coffeeMug1.SetActive(false);
        coffeeMug2.SetActive(false);
        coffeeMug3.SetActive(false);
        coffeeMug4.SetActive(false);
        bookShelve.SetActive(false);
        chest.SetActive(false);
        clifford.SetActive(false);
        crawley.SetActive(false);
        curtains.SetActive(false);
        door.SetActive(false);
        qrCodeObject.SetActive(false);
        redBear.SetActive(false);
        bubbleGum.SetActive(false);
    }

    private void Start()
    {
        // Make sure all the game objects are initially disabled
        DisableAllGameObjects();
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
                if (nameToIndexMap[qrCode.qrCode.Data] == 0)    
                    
                    //The below line was throwing error in comparision so I changed it with above line
                    //nameToIndexMap.ContainsKey(qrCode.qrCode.Data) == 0
                {
                    /*contentGameObject = Instantiate(ARTargets[nameToIndexMap[qrCode.qrCode.Data]]);
                    contentGameObject.transform.position = transform.position;
                    //TODO: You might have to adjust the orientation here
                    contentGameObject.transform.rotation = transform.rotation;

                    //The "Cube" GO is scalled according to the QR code's size (*AKA Distance*)
                    //Let's make our content a child of the "CUBE"
                    contentGameObject.transform.parent = gameObject.transform.GetChild(1).transform;
                    haveInstantiatedContent = true; */



                    //This is one way in which I can enable and disable the gameobject in scene. But in this I have to
                    //write code again and again. So Instead of this I thought to remove all the components from the scene
                    //(make everything as prefab) and enable only those which has been detected from the QR.

                    /*coffeeMug1.SetActive(true);
                    coffeeMug2.SetActive(false);
                    coffeeMug3.SetActive(false);
                    coffeeMug4.SetActive(false);
                    bookShelve.SetActive(false);
                    chest.SetActive(false);
                    clifford.SetActive(false);
                    crawley.SetActive(false);
                    curtains.SetActive(false);
                    door.SetActive(false);
                    qrCode.SetActive(false);
                    redBear.SetActive(false);
                    bubbleGum.SetActive(false);*/


                    coffeeMug1.SetActive(true);

                }

                else if (nameToIndexMap[qrCode.qrCode.Data] == 1)
                {
                    DisableAllGameObjects();
                    bookShelve.SetActive(true);
                }

                else if (nameToIndexMap[qrCode.qrCode.Data] == 2)
                {
                    DisableAllGameObjects();
                    coffeeMug2.SetActive(true);
                }

                else if (nameToIndexMap[qrCode.qrCode.Data] == 3)
                {
                    DisableAllGameObjects();
                    coffeeMug3.SetActive(true);
                }

                else if (nameToIndexMap[qrCode.qrCode.Data] == 4)
                {
                    DisableAllGameObjects();
                    curtains.SetActive(true);
                }

                else if (nameToIndexMap[qrCode.qrCode.Data] == 5)
                {
                    DisableAllGameObjects();
                    redBear.SetActive(true);
                }

                else if (nameToIndexMap[qrCode.qrCode.Data] == 6)
                {
                    DisableAllGameObjects();
                    bubbleGum.SetActive(true);
                }
                else if (nameToIndexMap[qrCode.qrCode.Data] == 7)
                {
                    DisableAllGameObjects();
                    crawley.SetActive(true);
                }
                else if (nameToIndexMap[qrCode.qrCode.Data] == 8)
                {
                    DisableAllGameObjects();
                    coffeeMug4.SetActive(true);
                }
                else if (nameToIndexMap[qrCode.qrCode.Data] == 9)
                {
                    DisableAllGameObjects();
                    clifford.SetActive(true);
                }
                else if (nameToIndexMap[qrCode.qrCode.Data] == 10)
                {
                    DisableAllGameObjects();
                    door.SetActive(true);
                }
                else if (nameToIndexMap[qrCode.qrCode.Data] == 11)
                {
                    DisableAllGameObjects();
                    chest.SetActive(true);
                }
                else if (nameToIndexMap[qrCode.qrCode.Data] == 12)
                {
                    DisableAllGameObjects();
                    qrCodeObject.SetActive(true);
                }
            }
            
        }

        
    }
    
    


}
