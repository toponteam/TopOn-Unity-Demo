using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using System.Xml;

using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using ATJson;
using ATProviderInfo;
using ATNet;
using UnityEditor.PackageManager.Requests;
using UnityEditor.PackageManager;

using ATConf;
public class ATDownloadManager : EditorWindow {

    private GUIStyle headerStyle;
    private GUIStyle textStyle;
    private GUIStyle boldTextStyle;

    internal class ProviderInfoComparor : IComparer<ATInfo>
    {
        public int Compare(ATInfo x, ATInfo y)
        {
            return x.providerName.CompareTo(y.providerName);
        }
    }

    private string filePath = ATNetInfo.networkPath;
    private const int Width = 760;
    private const int Height = 760;

    private ATEditorCoroutines mEditorCoroutines;

    private UnityWebRequest downloadWebClient;
    
    private readonly GUILayoutOption buttonWidth = GUILayout.Width(90);

    private readonly SortedSet<ATInfo> providersSet = new SortedSet<ATInfo>(new ProviderInfoComparor());

    private  ATconfig localConfig = ATconfig.getLocalConfig();
     private  ATconfig reqConfig;
     private Boolean updateCore = false;

     private ATInfo currentProvider;
     private ATInfo coreProvider;
     private String versionNo = "-";


    public static void showManager(){
        var win = GetWindowWithRect<ATDownloadManager>(new Rect(0, 0, Width, Height), true);
        win.titleContent = new GUIContent("AnyThink Integration Manager");
        win.Focus();
    }
    
     private void OnEnable()
    {

         mEditorCoroutines = ATEditorCoroutines.StartEditorCoroutine(getVersions());
       
    }
    
    private IEnumerator getVersions(){
       
        filePath = ATNetInfo.networkPath;
        
        UnityWebRequest unityWebRequest = UnityWebRequest.Get(filePath);
        var webRequest = unityWebRequest.SendWebRequest();
        while (!webRequest.isDone)
        {
             
            yield return new WaitForSeconds(0.1f);
        }
        if (!unityWebRequest.isHttpError && !unityWebRequest.isNetworkError)
        {
             
             string json = unityWebRequest.downloadHandler.text;
           
             Dictionary<string, object> dic = new Dictionary<string, object>();
            try
            
            {
                dic = Json.Deserialize(json) as Dictionary<string, object>;
                reqConfig =  JsonUtility.FromJson<ATconfig>(json);
                
                 Debug.Log("req version");
                // if (selected == 0 ){
                //       reloadList(dic, "GlobalSdk");
                 
                // }else{
                //      reloadList(dic, "ChinaSdk");
                // }
                 ATEditorCoroutines.StartEditorCoroutine(getNetworkList());
            }

            catch (Exception e)
            {
                Debug.Log("Error getting response " + e.ToString());
            }

             
        }
     
     
       Repaint();
       requested = true;
    }

    private IEnumerator getNetworkList(){
       
       
        
        filePath = ATNetInfo.getNetworkJson(versionNo);

        Debug.Log("get network list:"+filePath);

        UnityWebRequest unityWebRequest = UnityWebRequest.Get(filePath);
        var webRequest = unityWebRequest.SendWebRequest();
        while (!webRequest.isDone)
        {
             
            yield return new WaitForSeconds(0.1f);
        }
        if (!unityWebRequest.isHttpError && !unityWebRequest.isNetworkError)
        {
             providersSet.Clear();
             string json = unityWebRequest.downloadHandler.text;
           
             Dictionary<string, object> dic = new Dictionary<string, object>();
            try
            
            {
                dic = Json.Deserialize(json) as Dictionary<string, object>;
                // reqConfig =  JsonUtility.FromJson<ATconfig>(json);
                
                Debug.Log("network list:"+ json);
                if (selected == 0 ){
                      reloadList(dic, "GlobalSdk");
                 
                }else{
                     reloadList(dic, "ChinaSdk");
                }
            }

            catch (Exception e)
            {
                Debug.Log("Error getting response " + e.ToString());
            }

             
        }
     
     
     Repaint();
    }
    private void reloadList(Dictionary<string,object> dic, string key){
         object providersJson;
                if (dic.TryGetValue(key, out providersJson))
                {
                    if(providersJson!=null){
                         foreach (var item in providersJson as Dictionary<string, object>)
                        {
                            ATInfo info = new ATInfo();
    
                            if (info.GetFromJson(item.Key, item.Value as Dictionary<string, object>))
                            {
                                
                                    if(info.displayProviderName != "Core"){
                                        providersSet.Add(info);
                                    }
                                    else{
                                        coreProvider = info;
                                    }
                               
                            }
                        }
                    }
                }
    }

    private void drawHeaderVersion(){
           
            selectedOption =  EditorGUILayout.Popup("Version",selectedOption,reqConfig.versionList);
            string ver = reqConfig.versionList[selectedOption];
            if(versionNo != ver){
                versionNo = ver;
               // ATEditorCoroutines.StartEditorCoroutine(getNetworkList());
            }
             GUILayout.Space(5);
       
      

             using (new EditorGUILayout.HorizontalScope( GUILayout.Width(280)))
          {
            
                          
              
            
             GUI.enabled = true;
             
            //  EditorGUILayout.LabelField("Region", GUILayout.Width(45));
            // int  opsi = GUILayout.SelectionGrid(selected, options, options.Length, EditorStyles.radioButton);
            // // if (selected >=0){
            // //          ATEditorCoroutines.StartEditorCoroutine(getVersions());
            // // }
            
            // if (selected!=opsi) {
                 
            //     selected = opsi;
            //     ATEditorCoroutines.StartEditorCoroutine(getNetworkList());
            // }

            GUILayout.Space(5);

             
            if(coreProvider != null){
              
              coreProvider.latestUnityVersion = versionNo;

               if (coreProvider.currentUnityVersion == "-")
                {
                    bool btn = GUILayout.Button(new GUIContent
                    {
                        text = "Install Core",
                        tooltip = ""
                    }, buttonWidth);
                    if (btn && downloadWebClient == null)
                    {
                        GUI.enabled = true;
                        currentProvider = coreProvider;
                        updateCore = false;

                        
                        
                        ATEditorCoroutines.StartEditorCoroutine(DownloadFile(getDownloadUrl(coreProvider.displayProviderName)));
                    }

                }
                else if (coreProvider.currentUnityVersion != versionNo)
                {
                    var btn = GUILayout.Button(new GUIContent
                    {
                        text= "Update Core",
                        tooltip = ""
                    }
                    ,buttonWidth);

                    if (btn && downloadWebClient == null)
                    {
                        GUI.enabled = true;
                        currentProvider = coreProvider;
                        updateCore = false;
                         ATEditorCoroutines.StartEditorCoroutine(DownloadFile(getDownloadUrl(coreProvider.displayProviderName)));
                    }
                }
                else
                {
                    GUI.enabled = false;
                    GUILayout.Button(new GUIContent
                    {
                        text = "Core Updated",
                     tooltip = ""
                    }, buttonWidth);
                }
                GUILayout.Space(5);
                GUI.enabled = true;
            
            
            }
           
          }
    }

     private void DrawSDKHeader()
    {
        
        using (new EditorGUILayout.HorizontalScope(GUILayout.ExpandWidth(false)))
        {
           
            EditorGUILayout.LabelField("Current SDK Version", new GUIStyle(EditorStyles.label)
            {
                fontStyle = FontStyle.Bold,
                fontSize = 13,
                fixedHeight = 20,
                stretchWidth = true,
                fixedWidth = Width / 4,
                clipping = TextClipping.Overflow,
                padding = new RectOffset(Width / 4 + 15, 0, 0, 0)
            });
            GUILayout.Space(85);
            EditorGUILayout.LabelField("Latest SDK Version", new GUIStyle(EditorStyles.label)
            {
                fontStyle = FontStyle.Bold,
                fontSize = 13,
                fixedHeight = 20,
                stretchWidth = true,
                fixedWidth = Screen.width / 4,
                clipping = TextClipping.Overflow,
            });
        }
    }

     void DrawProviderItem(ATInfo providerData)
    {
        if (!providerData.Equals(default(ATInfo)))
        {
            using (new EditorGUILayout.HorizontalScope(GUILayout.ExpandWidth(false)))
            {
                GUI.enabled = true;
                bool isNew = providerData.isNewProvider;
                string isNewAddition = isNew ? " - New Network" : string.Empty;
                string androidVersion = "";
                string iosVersion = "";
                string tooltipText = "Latest Version: \n " + providerData.providerName + " Adapter Version " + versionNo;
                if (!providerData.sdkVersionDic.TryGetValue(ATNetInfo.Android, out androidVersion))
                {
                    androidVersion = "";
                }
                else tooltipText = tooltipText + "\n Android SDK version " + androidVersion;
                if (!providerData.sdkVersionDic.TryGetValue(ATNetInfo.iOS, out iosVersion))
                {
                    iosVersion = "";
                }
                else tooltipText = tooltipText + "\n iOS SDK version " + iosVersion;

                EditorGUILayout.LabelField(providerData.displayProviderName + isNewAddition, isNew ? boldTextStyle : textStyle);
                EditorGUILayout.LabelField(providerData.currentDisplayVersion, textStyle);
                EditorGUILayout.LabelField(providerData.displayVersion, textStyle);
            
                if (providerData.currentStatues == ATInfo.Status.none)
                {
                    bool btn = GUILayout.Button(new GUIContent
                    {
                        text = "Install",
                        tooltip = tooltipText
                    }, buttonWidth);
                    if (btn && downloadWebClient == null)
                    {
                        GUI.enabled = true;
                        currentProvider = providerData;
                        updateCore = false;
                       
                    
                      if (coreProvider.currentUnityVersion == "-"){
                             EditorUtility.DisplayDialog("Install fail","Please install Core package first to proceed","Ok");
                       }else{
                            ATEditorCoroutines.StartEditorCoroutine(DownloadFile(getDownloadUrl(providerData.displayProviderName)));
                       }
                      
                    }

                }
                else if (providerData.currentStatues == ATInfo.Status.installed)
                {
                    var btn = GUILayout.Button(new GUIContent
                    {
                        text= "Update",
                        tooltip = tooltipText
                    }
                    ,buttonWidth);

                    if (btn && downloadWebClient == null)
                    {
                        GUI.enabled = true;
                        currentProvider = providerData;
                        updateCore = false;
                         ATEditorCoroutines.StartEditorCoroutine(DownloadFile(getDownloadUrl(providerData.displayProviderName)));
                    }
                }
                else
                {
                    GUI.enabled = false;
                    GUILayout.Button(new GUIContent
                    {
                        text = "Updated",
                        tooltip = tooltipText
                    }, buttonWidth);
                }
                GUILayout.Space(5);
                GUI.enabled = true;
            }
        }
    }
    private String getDownloadUrl(string network){
        
       string region = selected == 0 ? "NonChina" : "China";
    
       return  ATNetInfo.packagePath + versionNo +"/"+ region +"/"+ATNetInfo.platformName+network+".unitypackage";
    }
    private IEnumerator DownloadFile(string downloadFileUrl)
    {
        
         if(currentProvider.displayProviderName == "Core"){
            FileUtil.DeleteFileOrDirectory(ATNetInfo.ATDownloadDir);
            FileUtil.DeleteFileOrDirectory(ATNetInfo.ATDependencyDir);
            localConfig.resetNetwork();
        }
        int fileNameIndex = downloadFileUrl.LastIndexOf("/") + 1;
        string downloadFileName = downloadFileUrl.Substring(fileNameIndex);
        string fileDownloading = string.Format("Downloading {0}", downloadFileName);
        string genericFileName = Regex.Replace(downloadFileName, @"_v+(\d\.\d\.\d\.\d|\d\.\d\.\d)", "");
        string path = Path.Combine(ATNetInfo.ATDownloadDir, genericFileName);
        bool isCancelled = false;
        downloadWebClient = new UnityWebRequest(downloadFileUrl);
        downloadWebClient.downloadHandler = new DownloadHandlerFile(path);
        downloadWebClient.SendWebRequest();
        if (!downloadWebClient.isHttpError && !downloadWebClient.isNetworkError)
        {
            while (!downloadWebClient.isDone)
            {
                yield return new WaitForSeconds(0.1f);
                if (EditorUtility.DisplayCancelableProgressBar("Download Manager", fileDownloading, downloadWebClient.downloadProgress))
                {
                    if (downloadWebClient.error != null)
                    {
                        Debug.LogError(downloadWebClient.error);
                    }
                    CancelDownload();
                    isCancelled = true;
                }
            }
        }
        else
        {
            Debug.LogError("Error Downloading " + genericFileName + " : " + downloadWebClient.error);
        }


        EditorUtility.ClearProgressBar();
        
        if (genericFileName.EndsWith(".unitypackage") && !isCancelled)
        {
            AssetDatabase.ImportPackage(Path.Combine(ATNetInfo.ATDownloadDir, genericFileName), true);
        }
        else
        {
            // in case the download was cancelled, delete the file
            if(isCancelled && File.Exists(ATNetInfo.ATDownloadDir + genericFileName))
            {
                File.Delete(ATNetInfo.ATDownloadDir + genericFileName);
            }

            ATEditorCoroutines.StartEditorCoroutine(getVersions());
        }

        localConfig.updateNetwork(currentProvider);
        AssetDatabase.Refresh();
          

        //clean the downloadWebClient object regardless of whether the request succeeded or failed 
        downloadWebClient.Dispose();
        downloadWebClient = null;

        ATEditorCoroutines.StartEditorCoroutine(getVersions());
    }

    private void CancelDownload()
    {
        // if downloader object is still active
        if (downloadWebClient != null)
        {
            downloadWebClient.Abort();
            return;
        }

        if (mEditorCoroutines != null)
        {
            mEditorCoroutines.StopEditorCoroutine();
            mEditorCoroutines = null;
        }

        downloadWebClient = null;
    }


 void Awake()
    {
        headerStyle = new GUIStyle(EditorStyles.label)
        {
            fontStyle = FontStyle.Bold,
            fontSize = 14,
            fixedHeight = 20,
            stretchWidth = true,
            fixedWidth = Width / 4 + 5,
            clipping = TextClipping.Overflow,
            alignment = TextAnchor.MiddleLeft
        };
        textStyle = new GUIStyle(EditorStyles.label)
        {
            fontStyle = FontStyle.Normal,
            alignment = TextAnchor.MiddleLeft

        };
        boldTextStyle = new GUIStyle(EditorStyles.label)
        {
            fontStyle = FontStyle.Bold
        };
          

            
    }
    private void OnDestroy()
    {
        CancelDownload();
        AssetDatabase.Refresh();
    }

int selected = ATNetInfo.isGlobal;
 static string[] options = new string[] { "Global", "China" };
 string[] dropoptions = new string[]
 {
     "Option1", "Option2", "Option3", 
 };
 bool requested = false;

 int selectedOption = 0;

     void OnGUI()
    {
        
       
       
        GUILayout.Space(10);

         if(reqConfig==null ){
            return;
        }
      
        using (new EditorGUILayout.VerticalScope("box"))
        {
            
            GUILayout.Space(5);

        
            drawHeaderVersion();
            GUILayout.Space(5);
            DrawSDKHeader();
            GUILayout.Space(5);
            GUILayout.BeginHorizontal();

        }
        
        // if(coreProvider != null){
        //           DrawProviderItem(coreProvider);
        // }


  
         foreach (var provider in providersSet)
        {
            
            DrawProviderItem(provider);
            GUILayout.Space(2);
        }
        GUILayout.Space(30);

    }
}