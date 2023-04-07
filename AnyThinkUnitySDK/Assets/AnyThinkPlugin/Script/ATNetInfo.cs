using System;
using System.Collections;
using System.Collections.Generic;


using UnityEngine;

namespace  ATNet {
    
    public static class ATNetInfo {
        public static string platformName = "AnyThink";
        public  static string ATDownloadDir = "Assets/AnyThinkAds/Dependencies/";
        public  static string ATDependencyDir = "Assets/AnyThinkAds/Plugins/";
        public  static string sdk = "sdk";
         public  static string Android = "Android";
        public  static string iOS = "iOS";
        public static string localConfig =  "Assets/AnyThinkPlugin/Editor/localConfig.json";
        public static string networkPath = "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/Unity/network_config.json";
        public static string packagePath = "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/Unity/";
        public static int isGlobal=0; //0:国外 //1:国内

        public static string getNetworkJson(String ver){
            return "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/Unity/"+ver+"/network.json";
        }
    }
    
}
