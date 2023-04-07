using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using  UnityEditor;

public class ATMenu : UnityEditor.Editor
{
    // Start is called before the first frame update
   [MenuItem("AnyThink/Documentation", false, 0)]
    public static void Documentation()
    {
        Application.OpenURL("https://docs.toponad.com/#/en-us/unity/download/package?_t=YyEWrxzJVTjbQFhszxvWabdIARg7mzE4");
    }

    [MenuItem("AnyThink/SDK Manager", false, 0)]
    public static void sdkManager()
    {
        ATDownloadManager.showManager();

    }
    
    // Update is called once per frame
    void Update()
    {
        
    }
}
