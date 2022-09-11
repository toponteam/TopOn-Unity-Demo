using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AnyThinkAds.Common;
using AnyThinkAds.Api;
#pragma warning disable 0067
namespace AnyThinkAds.Android
{
    public class ATBannerAdClient : AndroidJavaProxy, IATBannerAdClient
    {

        private Dictionary<string, AndroidJavaObject> bannerHelperMap = new Dictionary<string, AndroidJavaObject>();

        
        private  ATBannerAdListener anyThinkListener;

         public event EventHandler<ATAdEventArgs> onAdLoadEvent;

        // triggers when a banner ad has failed to load
        public event EventHandler<ATAdErrorEventArgs> onAdLoadFailureEvent;

        // triggers when a banner ad generates an impression
        public event EventHandler<ATAdEventArgs> onAdImpressEvent;

        // triggers when the user clicks a banner ad
        public event EventHandler<ATAdEventArgs> onAdClickEvent;

        // triggers when the ad refreshes
        public event EventHandler<ATAdEventArgs> onAdAutoRefreshEvent;

        // triggers when the ad fails to auto refresh
        public event EventHandler<ATAdErrorEventArgs> onAdAutoRefreshFailureEvent;

        // triggers when the banner ad is closed
        public event EventHandler<ATAdEventArgs> onAdCloseEvent;

        // triggers when the users closes the ad via the button
        public event EventHandler<ATAdEventArgs> onAdCloseButtonTappedEvent;

        public event EventHandler<ATAdEventArgs> onAdSourceAttemptEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceFilledEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdSourceLoadFailureEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceBiddingAttemptEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceBiddingFilledEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdSourceBiddingFailureEvent;

        public ATBannerAdClient() : base("com.anythink.unitybridge.banner.BannerListener")
        {
            
        }


        public void loadBannerAd(string placementId, string mapJson)
        {

            //如果不存在则直接创建对应广告位的helper
            if(!bannerHelperMap.ContainsKey(placementId))
            {
                AndroidJavaObject bannerHelper = new AndroidJavaObject(
                    "com.anythink.unitybridge.banner.BannerHelper", this);
                bannerHelper.Call("initBanner", placementId);
                bannerHelperMap.Add(placementId, bannerHelper);
                Debug.Log("ATBannerAdClient : no exit helper ,create helper ");
            }

            try
            {
                Debug.Log("ATBannerAdClient : loadBannerAd ");
                bannerHelperMap[placementId].Call("loadBannerAd", mapJson);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log ("ATBannerAdClient :  error."+e.Message);
            }


        }

        public string checkAdStatus(string placementId)
        {
            string adStatusJsonString = "";
            Debug.Log("ATBannerAdClient : checkAdStatus....");
            try
            {
                if (bannerHelperMap.ContainsKey(placementId))
                {
                    adStatusJsonString = bannerHelperMap[placementId].Call<string>("checkAdStatus");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATBannerAdClient :  error." + e.Message);
            }

            return adStatusJsonString;
        }

        public string getValidAdCaches(string placementId)
        {
            string validAdCachesString = "";
            Debug.Log("ATBannerAdClient : getValidAdCaches....");
            try
            {
                if (bannerHelperMap.ContainsKey(placementId))
                {
                    validAdCachesString = bannerHelperMap[placementId].Call<string>("getValidAdCaches");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATBannerAdClient :  error." + e.Message);
            }

            return validAdCachesString;
        }


        public void setListener(ATBannerAdListener listener)
        {
            anyThinkListener = listener;
        }


        public void showBannerAd(string placementId, string position, string mapJson)
        {
            Debug.Log("ATBannerAdClient : showBannerAd by position" );
            //todo
            try
            {
                if (bannerHelperMap.ContainsKey(placementId))
                {
                    this.bannerHelperMap[placementId].Call("showBannerAd", position, mapJson);
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATBannerAdClient :  error." + e.Message);
            }

        }
       

		
        public void showBannerAd(string placementId, ATRect rect, string mapJson)
        {
            Debug.Log("ATBannerAdClient : showBannerAd " );

			try{
                if (bannerHelperMap.ContainsKey(placementId)) {
                    this.bannerHelperMap[placementId].Call ("showBannerAd", rect.x, rect.y, rect.width, rect.height, mapJson);
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log ("ATBannerAdClient :  error."+e.Message);

			}
        }

        public void cleanBannerAd(string placementId)
        {
			
            Debug.Log("ATBannerAdClient : cleanBannerAd" );

			try{
                if (bannerHelperMap.ContainsKey(placementId)) {
                    this.bannerHelperMap[placementId].Call ("cleanBannerAd");
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log ("ATBannerAdClient :  error."+e.Message);
			}
        }

        public void hideBannerAd(string placementId) 
        {
            Debug.Log("ATBannerAdClient : hideBannerAd");

            try
            {
                if (bannerHelperMap.ContainsKey(placementId))
                {
                    this.bannerHelperMap[placementId].Call("hideBannerAd");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATBannerAdClient :  error." + e.Message);
            }
        }

        //针对已有的进行展示，没有就调用该方法无效
        public void showBannerAd(string placementId)
        {
            Debug.Log("ATBannerAdClient : showBannerAd ");

            try
            {
                if (bannerHelperMap.ContainsKey(placementId))
                {
                    this.bannerHelperMap[placementId].Call("showBannerAd");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATBannerAdClient :  error." + e.Message);

            }
        }

        public void cleanCache(string placementId)
        {
            
        }

       
        //广告加载成功
        public void onBannerLoaded(string placementId)
        {
            Debug.Log("onBannerLoaded...unity3d.");
            onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId));
        }

        //广告加载失败
        public void onBannerFailed(string placementId,string code, string error)
        {
            Debug.Log("onBannerFailed...unity3d.");
            onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, error, code));
        }

        //广告点击
        public void onBannerClicked(string placementId, string callbackJson)
        {
            Debug.Log("onBannerClicked...unity3d.");
            onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        //广告展示
        public void onBannerShow(string placementId, string callbackJson)
        {
            Debug.Log("onBannerShow...unity3d.");
          onAdImpressEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        //广告关闭
        public void onBannerClose(string placementId, string callbackJson)
        {
            Debug.Log("onBannerClose...unity3d.");
           onAdCloseEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }
        //广告关闭
        public void onBannerAutoRefreshed(string placementId, string callbackJson)
        {
            Debug.Log("onBannerAutoRefreshed...unity3d.");
            onAdAutoRefreshEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }
        //广告自动刷新失败
        public void onBannerAutoRefreshFail(string placementId, string code, string msg)
        {
            Debug.Log("onBannerAutoRefreshFail...unity3d.");
            onAdAutoRefreshFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, msg, code));
        }

        // Adsource Listener
        public void onAdSourceBiddingAttempt(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceBiddingAttempt...unity3d." + placementId + "," + callbackJson);
            
             onAdSourceBiddingAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        public void onAdSourceBiddingFilled(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceBiddingFilled...unity3d." + placementId + "," + callbackJson);
            
             onAdSourceBiddingFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        public void onAdSourceBiddingFail(string placementId, string callbackJson, string code, string error)
        {
            Debug.Log("onAdSourceBiddingFail...unity3d." + placementId + "," + code + "," + error + "," + callbackJson);
           
            onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
        }

        public void onAdSourceAttempt(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceAttempt...unity3d." + placementId + "," + callbackJson);
          
              onAdSourceAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        public void onAdSourceLoadFilled(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceLoadFilled...unity3d." + placementId + "," + callbackJson);
           
            onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        public void onAdSourceLoadFail(string placementId, string callbackJson, string code, string error)
        {
            Debug.Log("onAdSourceLoadFail...unity3d." + placementId + "," + code + "," + error + "," + callbackJson);
              onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
        }

    }
}
