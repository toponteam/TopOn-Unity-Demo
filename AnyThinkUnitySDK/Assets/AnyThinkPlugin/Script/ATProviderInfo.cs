using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using System.Xml;
using UnityEditor;
using UnityEngine;
using UnityEngine.Networking;
using ATNet;
using ATConf;
namespace  ATProviderInfo {

    public class ATInfo
    {

       

        public Status currentStatues;
        public string providerName;
        public string currentUnityVersion;
        public string latestUnityVersion;
        public string downloadURL;
        public string displayProviderName;

        public string currentDisplayVersion="-";
        public string displayVersion;

        public bool isNewProvider;
        public string fileName;

        public string packageName;
        


        public Dictionary<string, string> sdkVersionDic;

        public ATconfig localConfig;


        public ATInfo()
        {
            isNewProvider = false;
            fileName = string.Empty;
            downloadURL = string.Empty;
            currentUnityVersion = "none";
            sdkVersionDic = new Dictionary<string, string>();
            localConfig = ATconfig.getLocalConfig();
              
        }

        public enum Status
        {
            installed = 1,
            none = 2,
            updated = 3
        }

        public bool GetFromJson(string name, Dictionary<string, object> dic)
        {
            providerName = name;
            object obj;

            dic.TryGetValue("keyname", out obj);
            if (obj != null)
            {
                this.displayProviderName = obj as string;
            }
            else this.displayProviderName = providerName;

            dic.TryGetValue("version", out obj);

            if (obj != null)
            {
                this.latestUnityVersion = obj as string;
            }

             dic.TryGetValue("displayVersion", out obj);

            if (obj != null)
            {
                this.displayVersion = obj as string;
            }

           
            SDKInfo curInfo = null;
            foreach (SDKInfo info in localConfig.sDKInfo){
                if(info.network == this.displayProviderName)
                {
                   curInfo = info;
                   currentUnityVersion = info.version;
                   currentDisplayVersion = info.displayVersion;
                }
            }
            if(curInfo == null){ // no saved in local
                currentUnityVersion = "-";
            }
        
            if (currentUnityVersion.Equals("-"))
            {
                currentStatues = Status.none;
            }

            else
            {
                if (isNewerVersion(currentUnityVersion, latestUnityVersion))
                {
                    currentStatues = Status.installed;
                }
                else
                {
                    currentStatues = Status.updated;
                }
            }

            return true;
        }

        private static string GetVersionFromXML(string fileName)
    {
        XmlDocument xmlDoc = new XmlDocument();
        string version = "none";
        try
        {
            xmlDoc.LoadXml(File.ReadAllText(ATNetInfo.ATDownloadDir + fileName));
        }
        catch (Exception e)
        {
               Debug.Log("error--"+fileName+"--"+ e.Message);
            return version;
        }
        var unityVersion = xmlDoc.SelectSingleNode("dependencies/unityversion");
        
         
        if (unityVersion != null)
        {
            return (unityVersion.InnerText);
        }
        File.Delete(ATNetInfo.ATDownloadDir + fileName);
        return version;
    }

    private static bool isNewerVersion(string current, string latest)
    {
        bool isNewer = false;
        try
        {
            int[] currentVersion = Array.ConvertAll(current.Split('.'), int.Parse);
            int[] remoteVersion = Array.ConvertAll(latest.Split('.'), int.Parse);
            int remoteBuild = 0;
            int curBuild = 0;
            if (currentVersion.Length > 3)
            {
                curBuild = currentVersion[3];
            }
            if (remoteVersion.Length > 3)
            {
                remoteBuild = remoteVersion[3];

            }
            System.Version cur = new System.Version(currentVersion[0], currentVersion[1], currentVersion[2], curBuild);
            System.Version remote = new System.Version(remoteVersion[0], remoteVersion[1], remoteVersion[2], remoteBuild);
            isNewer = cur < remote;
        }
        catch (Exception)
        {

        }
        return isNewer;

    }
 }
}
