using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AnyThinkAds.Common;
using AnyThinkAds.Api;
using AnyThinkAds.ThirdParty.LitJson;
namespace AnyThinkAds.Android
{
    public class ATRewardedVideoAdClient : AndroidJavaProxy,IATRewardedVideoAdClient
    {
        public event EventHandler<ATAdEventArgs>		onAdLoadEvent;
        public event EventHandler<ATAdErrorEventArgs>	onAdLoadFailureEvent;
        public event EventHandler<ATAdEventArgs>		onAdVideoStartEvent;
        public event EventHandler<ATAdEventArgs>		onAdVideoEndEvent;
        public event EventHandler<ATAdErrorEventArgs>	onAdVideoFailureEvent;
        public event EventHandler<ATAdRewardEventArgs>	onAdVideoCloseEvent;
        public event EventHandler<ATAdEventArgs>		onAdClickEvent;
        public event EventHandler<ATAdEventArgs>	onRewardEvent;
        public event EventHandler<ATAdEventArgs>		onAdSourceAttemptEvent;
        public event EventHandler<ATAdEventArgs>		onAdSourceFilledEvent;
        public event EventHandler<ATAdErrorEventArgs>	onAdSourceLoadFailureEvent;
        public event EventHandler<ATAdEventArgs>		onAdSourceBiddingAttemptEvent;
        public event EventHandler<ATAdEventArgs>		onAdSourceBiddingFilledEvent;
        public event EventHandler<ATAdErrorEventArgs>	onAdSourceBiddingFailureEvent;
        public event EventHandler<ATAdEventArgs>		onPlayAgainStart;
        public event EventHandler<ATAdEventArgs>		onPlayAgainEnd;
        public event EventHandler<ATAdErrorEventArgs>	onPlayAgainFailure;
        public event EventHandler<ATAdEventArgs>		onPlayAgainClick;
        public event EventHandler<ATAdEventArgs>		onPlayAgainReward;


        private Dictionary<string, AndroidJavaObject> videoHelperMap = new Dictionary<string, AndroidJavaObject>();

        private AndroidJavaObject videoAutoAdHelper;

        //private  AndroidJavaObject videoHelper;
        private  ATRewardedVideoListener anyThinkListener;

        public ATRewardedVideoAdClient() : base("com.anythink.unitybridge.videoad.VideoListener")
        {
            videoAutoAdHelper = new AndroidJavaObject("com.anythink.unitybridge.videoad.VideoAutoAdHelper", this);
        }


        public void loadVideoAd(string placementId, string mapJson)
        {

            if(!videoHelperMap.ContainsKey(placementId))
            {
                AndroidJavaObject videoHelper = new AndroidJavaObject(
                    "com.anythink.unitybridge.videoad.VideoHelper", this);
                videoHelper.Call("initVideo", placementId);
                videoHelperMap.Add(placementId, videoHelper);
                Debug.Log("ATRewardedVideoAdClient : no exit helper ,create helper ");
            }

            try
            {
                Debug.Log("ATRewardedVideoAdClient : loadVideoAd ");
                videoHelperMap[placementId].Call("fillVideo", mapJson);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATRewardedVideoAdClient :  error."+e.Message);
            }


        }

        public void setListener(ATRewardedVideoListener listener)
        {
            anyThinkListener = listener;
        }

        public bool hasAdReady(string placementId)
        {
			bool isready = false;
			Debug.Log ("ATRewardedVideoAdClient : hasAdReady....");
			try{
                if (videoHelperMap.ContainsKey(placementId)) {
                    isready = videoHelperMap[placementId].Call<bool> ("isAdReady");
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATRewardedVideoAdClient :  error."+e.Message);
			}
			return isready; 
        }

        public string checkAdStatus(string placementId)
        {
            string adStatusJsonString = "";
            Debug.Log("ATRewardedVideoAdClient : checkAdStatus....");
            try
            {
                if (videoHelperMap.ContainsKey(placementId))
                {
                    adStatusJsonString = videoHelperMap[placementId].Call<string>("checkAdStatus");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATRewardedVideoAdClient :  error." + e.Message);
            }

            return adStatusJsonString;
        }

        public void entryScenarioWithPlacementID(string placementId, string scenarioID){
            Debug.Log("ATRewardedVideoAdClient : entryScenarioWithPlacementID....");
            try
            {
                if (videoHelperMap.ContainsKey(placementId))
                {
                    videoHelperMap[placementId].Call("entryAdScenario", scenarioID);
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATRewardedVideoAdClient entryScenarioWithPlacementID:  error." + e.Message);
            }

        }
    
        

        public string getValidAdCaches(string placementId)
        {
            string validAdCachesString = "";
            Debug.Log("ATNativeAdClient : getValidAdCaches....");
            try
            {
                if (videoHelperMap.ContainsKey(placementId))
                {
                    validAdCachesString = videoHelperMap[placementId].Call<string>("getValidAdCaches");
                }
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATNativeAdClient :  error." + e.Message);
            }

            return validAdCachesString;
        }

        public void showAd(string placementId, string scenario)
        {
			Debug.Log("ATRewardedVideoAdClient : showAd " );

			try{
                if (videoHelperMap.ContainsKey(placementId)) {
                    this.videoHelperMap[placementId].Call ("showVideo", scenario);
				}
			}catch(System.Exception e){
				System.Console.WriteLine("Exception caught: {0}", e);
				Debug.Log ("ATRewardedVideoAdClient :  error."+e.Message);

			}
        }



        public void onRewardedVideoAdLoaded(string placementId)
        {
            Debug.Log("onRewardedVideoAdLoaded...unity3d.");
            onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId));
        }


        public void onRewardedVideoAdFailed(string placementId,string code, string error)
        {
            Debug.Log("onRewardedVideoAdFailed...unity3d.");
            onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, code, error));
        }


        public void onRewardedVideoAdPlayStart(string placementId, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdPlayStart...unity3d.");
            onAdVideoStartEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }


        public void onRewardedVideoAdPlayEnd(string placementId, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdPlayEnd...unity3d.");
            onAdVideoEndEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }


        public void onRewardedVideoAdPlayFailed(string placementId,string code, string error)
        {
            Debug.Log("onRewardedVideoAdPlayFailed...unity3d.");
            onAdVideoFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, code, error));
        }

        public void onRewardedVideoAdClosed(string placementId,bool isRewarded, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdClosed...unity3d.");
            onAdVideoCloseEvent?.Invoke(this, new ATAdRewardEventArgs(placementId, callbackJson, isRewarded));
        }

        public void onRewardedVideoAdPlayClicked(string placementId, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdPlayClicked...unity3d.");
            onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
           
        }


        public void onReward(string placementId, string callbackJson)
        {
            Debug.Log("onReward...unity3d.");
            onRewardEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }


        public void onRewardedVideoAdAgainPlayStart(string placementId, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdAgainPlayStart...unity3d.");
            onPlayAgainStart?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

        public void onRewardedVideoAdAgainPlayEnd(string placementId, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdAgainPlayEnd...unity3d.");
            onPlayAgainEnd?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }


        public void onRewardedVideoAdAgainPlayFailed(string placementId, string code, string error)
        {
            Debug.Log("onRewardedVideoAdAgainPlayFailed...unity3d.");
            onPlayAgainFailure?.Invoke(this, new ATAdErrorEventArgs(placementId, code, error));
        }


        public void onRewardedVideoAdAgainPlayClicked(string placementId, string callbackJson)
        {
            Debug.Log("onRewardedVideoAdAgainPlayClicked...unity3d.");
            onPlayAgainClick?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
            
        }


        public void onAgainReward(string placementId, string callbackJson)
        {
            Debug.Log("onAgainReward...unity3d.");
            onPlayAgainReward?.Invoke(this, new ATAdRewardEventArgs(placementId, callbackJson, true));
        }

        // Adsource Listener
        public void onAdSourceBiddingAttempt(string placementId, string callbackJson)
        {
            Debug.Log("onAdSourceBiddingAttempt...unity3d."+ placementId + "," + callbackJson);
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
            onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, code, error));
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
            onAdSourceLoadFailureEvent?.Invoke(this,new ATAdErrorEventArgs(placementId, code, error));
        }


        // Auto
        public void addAutoLoadAdPlacementID(string[] placementIDList){
            Debug.Log("Unity: ATRewardedVideoAdClient:addAutoLoadAdPlacementID()" + JsonMapper.ToJson(placementIDList));
            try
            {
                videoAutoAdHelper.Call("addPlacementIds", JsonMapper.ToJson(placementIDList));
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("Unity: ATRewardedVideoAdClient addAutoLoadAdPlacementID:  error." + e.Message);
            }
        }

        public void removeAutoLoadAdPlacementID(string placementId) {
			Debug.Log("Unity: ATRewardedVideoAdClient:removeAutoLoadAdPlacementID()");
            try
            {
                videoAutoAdHelper.Call("removePlacementIds", placementId);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("Unity: ATRewardedVideoAdClient removeAutoLoadAdPlacementID:  error." + e.Message);
            }
        }

		public bool autoLoadRewardedVideoReadyForPlacementID(string placementId) 
        {
			Debug.Log("Unity: ATRewardedVideoAdClient:autoLoadRewardedVideoReadyForPlacementID()");
            bool isready = false;
            try
            {
                 isready = videoAutoAdHelper.Call<bool>("isAdReady", placementId);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATRewardedVideoAdClient:autoLoadRewardedVideoReadyForPlacementID( :  error." + e.Message);
            }
            return isready;
		}

		public string getAutoValidAdCaches(string placementId)
		{
            Debug.Log("Unity: ATRewardedVideoAdClient:getAutoValidAdCaches()");
            string adStatusJsonString = "";
            try
            {
                adStatusJsonString = videoAutoAdHelper.Call<string>("getValidAdCaches", placementId);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATRewardedVideoAdClient:getAutoValidAdCaches() :  error." + e.Message);
            }

            return adStatusJsonString;
		}

		public void setAutoLocalExtra(string placementId, string mapJson) 
        {
            Debug.Log("Unity: ATRewardedVideoAdClient:setAutoLocalExtra()");
            try
            {
                videoAutoAdHelper.Call("setAdExtraData", placementId, mapJson);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATRewardedVideoAdClient:setAutoLocalExtra() :  error." + e.Message);
            }
        }

        public void entryAutoAdScenarioWithPlacementID(string placementId, string scenarioID) 
        {
            Debug.Log("Unity: ATRewardedVideoAdClient:entryAutoAdScenarioWithPlacementID()");
            try
            {
                videoAutoAdHelper.Call("entryAdScenario", placementId, scenarioID);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("ATRewardedVideoAdClient:entryAutoAdScenarioWithPlacementID() :  error." + e.Message);
            }
        }
		public void showAutoAd(string placementId, string mapJson) {
            Debug.Log("Unity: ATRewardedVideoAdClient:showAutoAd()");
            try
            {
                videoAutoAdHelper.Call("show", placementId, mapJson);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("Unity: ATRewardedVideoAdClient:showAutoAd() :  error." + e.Message);
            }
        }

        public string checkAutoAdStatus(string placementId)
        {
            Debug.Log("Unity: ATRewardedVideoAdClient:checkAutoAdStatus() : checkAutoAdStatus....");
            string adStatusJsonString = "";
            try
            {
                adStatusJsonString = videoAutoAdHelper.Call<string>("checkAdStatus", placementId);
            }
            catch (System.Exception e)
            {
                System.Console.WriteLine("Exception caught: {0}", e);
                Debug.Log("Unity: ATRewardedVideoAdClient:checkAutoAdStatus() :  error." + e.Message);
            }

            return adStatusJsonString;
        }



    }
}
