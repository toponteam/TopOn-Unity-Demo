using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AnyThinkAds.Common;
using AnyThinkAds.Api;

namespace AnyThinkAds.Android
{
    public class ATNativeAdClient : AndroidJavaProxy, IATNativeAdClient
    {
		public event EventHandler<ATAdEventArgs>            onAdLoadEvent;
        public event EventHandler<ATAdErrorEventArgs>       onAdLoadFailureEvent;
        public event EventHandler<ATAdEventArgs>            onAdImpressEvent;
        public event EventHandler<ATAdEventArgs>            onAdClickEvent;
        public event EventHandler<ATAdEventArgs>            onAdVideoStartEvent;
        public event EventHandler<ATAdEventArgs>            onAdVideoEndEvent;
        public event EventHandler<ATAdProgressEventArgs>    onAdVideoProgressEvent;
        public event EventHandler<ATAdEventArgs>            onAdCloseEvent;
        public event EventHandler<ATAdEventArgs>            onAdSourceAttemptEvent;
        public event EventHandler<ATAdEventArgs>            onAdSourceFilledEvent;
        public event EventHandler<ATAdErrorEventArgs>       onAdSourceLoadFailureEvent;
        public event EventHandler<ATAdEventArgs>            onAdSourceBiddingAttemptEvent;
        public event EventHandler<ATAdEventArgs>            onAdSourceBiddingFilledEvent;
        public event EventHandler<ATAdErrorEventArgs>       onAdSourceBiddingFailureEvent;

        private Dictionary<string, AndroidJavaObject> nativeAdHelperMap = new Dictionary<string, AndroidJavaObject>();
        private ATNativeAdListener mlistener;

        public ATNativeAdClient(): base("com.anythink.unitybridge.nativead.NativeListener")
        {

        }

        public void loadNativeAd(string placementId, string mapJson)
        {
			Debug.Log ("loadNativeAd....jsonmap:"+mapJson);
            if(!nativeAdHelperMap.ContainsKey(placementId)){
                AndroidJavaObject nativeHelper = new AndroidJavaObject(
                    "com.anythink.unitybridge.nativead.NativeHelper", this);
                nativeHelper.Call("initNative", placementId);
                nativeAdHelperMap.Add(placementId, nativeHelper);
            }
			try{
                if (nativeAdHelperMap.ContainsKey(placementId)) {
                    nativeAdHelperMap[placementId].Call ("loadNative",mapJson);
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
			}
        }


        public bool hasAdReady(string placementId)
        {
			bool isready = false;
			Debug.Log ("hasAdReady....");
			try{
                if (nativeAdHelperMap.ContainsKey(placementId)) {
                    isready = nativeAdHelperMap[placementId].Call<bool> ("isAdReady");
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
			}
			return isready;   
        }
        
        public void entryScenarioWithPlacementID(string placementId, string scenarioID){
            Debug.Log("ATNativeAdClient : entryScenarioWithPlacementID....");
            try
            {
                if (nativeAdHelperMap.ContainsKey(placementId))
                {
                    nativeAdHelperMap[placementId].Call("entryAdScenario", scenarioID);
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATNativeAdClient entryScenarioWithPlacementID:  error." + e.Message);
            }


        }

        public string checkAdStatus(string placementId)
        {
            string adStatusJsonString = "";
            Debug.Log("ATNativeAdClient : checkAdStatus....");
            try
            {
                if (nativeAdHelperMap.ContainsKey(placementId))
                {
                    adStatusJsonString = nativeAdHelperMap[placementId].Call<string>("checkAdStatus");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATNativeAdClient :  error." + e.Message);
            }

            return adStatusJsonString;
        }

        public string getValidAdCaches(string placementId)
        {
            string validAdCachesString = "";
            Debug.Log("ATNativeAdClient : getValidAdCaches....");
            try
            {
                if (nativeAdHelperMap.ContainsKey(placementId))
                {
                    validAdCachesString = nativeAdHelperMap[placementId].Call<string>("getValidAdCaches");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATNativeAdClient :  error." + e.Message);
            }

            return validAdCachesString;
        }

        public void setListener(ATNativeAdListener listener)
        {
            mlistener = listener;
        }

		public void renderAdToScene(string placementId, ATNativeAdView anyThinkNativeAdView, string mapJson)
        {	
			string showconfig = anyThinkNativeAdView.toJSON ();
            //暂未实现 show
			Debug.Log ("renderAdToScene....showconfig >>>:"+showconfig);
			try{
                if (nativeAdHelperMap.ContainsKey(placementId)) {
                    nativeAdHelperMap[placementId].Call ("show",showconfig, mapJson);
				}
			}catch(System.Exception e){
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
				System.Console.WriteLine("Exception caught: {0}", e);
			}
        }

        public void cleanAdView(string placementId, ATNativeAdView anyThinkNativeAdView)
        {
           //
			Debug.Log ("cleanAdView.... ");
			try{

				if (nativeAdHelperMap.ContainsKey(placementId)) {
					nativeAdHelperMap[placementId].Call ("cleanView");
				}

			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
			}
        }

        public void onApplicationForces(string placementId, ATNativeAdView anyThinkNativeAdView)
        {


			Debug.Log ("onApplicationForces.... ");
			try{

				if (nativeAdHelperMap.ContainsKey(placementId)) {
					nativeAdHelperMap[placementId].Call ("onResume");
				}

			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
			}
        }


        public void onApplicationPasue(string placementId, ATNativeAdView anyThinkNativeAdView)
        {

			Debug.Log ("onApplicationPasue.... ");
			try{
				

				if (nativeAdHelperMap.ContainsKey(placementId)) {
					nativeAdHelperMap[placementId].Call ("onPause");
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
			}
        }

        public void cleanCache(string placementId)
        {
			Debug.Log ("cleanCache....");
			try{
                if (nativeAdHelperMap.ContainsKey(placementId)) {
                    nativeAdHelperMap[placementId].Call ("clean");
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATNativeAdClient :  error."+e.Message);
			}
        }

        /**
     * 广告展示回调
     *
     * @param view
     */
        public void onAdImpressed(string placementId, string callbackJson)
        {
            Debug.Log("onAdImpressed...unity3d.");
            onAdImpressEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }

        /**
     * 广告点击回调
     *
     * @param view
     */
        public void onAdClicked(string placementId, string callbackJson)
        {
            Debug.Log("onAdClicked...unity3d.");
             onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
         
        }

        /**
     * 广告视频开始回调
     *
     * @param view
     */
        public void onAdVideoStart(string placementId)
        {
            Debug.Log("onAdVideoStart...unity3d.");
           onAdVideoStartEvent?.Invoke(this, new ATAdEventArgs(placementId));
        }

        /**
     * 广告视频结束回调
     *
     * @param view
     */
        public void onAdVideoEnd(string placementId)
        {
            Debug.Log("onAdVideoEnd...unity3d.");
            onAdVideoEndEvent?.Invoke(this, new ATAdEventArgs(placementId,""));
        }

        /**
     * 广告视频进度回调
     *
     * @param view
     */
        public void onAdVideoProgress(string placementId,int progress)
        {
            Debug.Log("onAdVideoProgress...progress[" + progress + "]");
           onAdVideoProgressEvent?.Invoke(this, new ATAdProgressEventArgs(placementId,"",progress));
        }

        /**
   * 广告视频进度回调
   *
   * @param view
   */
        public void onAdCloseButtonClicked(string placementId, string callbackJson)
        {
            Debug.Log("onAdCloseButtonClicked...unity3d");
          onAdCloseEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }


        /**
     * 广告加载成功
     */
        public void onNativeAdLoaded(string placementId)
        {
            Debug.Log("onNativeAdLoaded...unity3d.");
             onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId,""));

        }

        /**
     * 广告加载失败
     */
        public void onNativeAdLoadFail(string placementId,string code, string msg)
        {
            Debug.Log("onNativeAdLoadFail...unity3d. code:" + code + " msg:" + msg);
            onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId,code,msg));
        }

        // Adsource Listener
        public void onAdSourceBiddingAttempt(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceBiddingAttempt...unity3d." + placementId + "," + callbackJson);
            
               onAdSourceBiddingAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }

        public void onAdSourceBiddingFilled(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceBiddingFilled...unity3d." + placementId + "," + callbackJson);
           
            onAdSourceBiddingFilledEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }

        public void onAdSourceBiddingFail(string placementId, string callbackJson, string code, string error)
        {
            Debug.Log("onAdSourceBiddingFail...unity3d." + placementId + "," + code + "," + error + "," + callbackJson);
            
             onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId,callbackJson,code,error));
        }

        public void onAdSourceAttempt(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceAttempt...unity3d." + placementId + "," + callbackJson);

            onAdSourceAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }

        public void onAdSourceLoadFilled(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceLoadFilled...unity3d." + placementId + "," + callbackJson);
           
            onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }

        public void onAdSourceLoadFail(string placementId, string callbackJson, string code, string error)
        {
            Debug.Log("onAdSourceLoadFail...unity3d." + placementId + "," + code + "," + error + "," + callbackJson);
            onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId,callbackJson,code,error));
        }


    }
}
