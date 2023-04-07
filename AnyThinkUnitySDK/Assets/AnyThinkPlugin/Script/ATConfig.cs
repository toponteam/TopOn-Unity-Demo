
using System;
using ATNet;
using ATJson;

using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using  System.Collections.Generic;
using ATProviderInfo;
using  System.IO;
 namespace  ATConf
{
    
    [Serializable]
    public class ATconfig
    {

    public string version;
    public  List<SDKInfo> sDKInfo;
    public String[] versionList;
   
    public void saveToLocal(){
        string potion = JsonUtility.ToJson(this);
        System.IO.File.WriteAllText(ATNetInfo.localConfig,potion);
        
    }   

    public void updateNetwork(ATInfo aTInfo){
            SDKInfo curInfo = null;

            Debug.Log("ver:"+aTInfo.latestUnityVersion);
                

            foreach (SDKInfo info in this.sDKInfo){
                if(info.network == aTInfo.displayProviderName){
                    curInfo = info;
                }
            }
            if(curInfo == null){
                curInfo = new SDKInfo();
                curInfo.network = aTInfo.displayProviderName;
                curInfo.version = aTInfo.latestUnityVersion;
                curInfo.displayVersion = aTInfo.displayVersion;
                
                this.sDKInfo.Add(curInfo);
            }else{
                curInfo.version = aTInfo.latestUnityVersion;
            }


            saveToLocal();
    }

     public void resetNetwork(){
           
            this.sDKInfo = new List<SDKInfo>();
            saveToLocal();
    }

    public static ATconfig getLocalConfig(){
          String file =  File.ReadAllText(ATNetInfo.localConfig);
            ATconfig  localConfig =  JsonUtility.FromJson<ATconfig>(file);

            if(localConfig == null){
                localConfig = new ATconfig();
            }
            return localConfig;

    }

}

    [Serializable]
    public class SDKInfo  {
        public string network;
        public string version;
    
        public string displayVersion;
        

    }

    
}