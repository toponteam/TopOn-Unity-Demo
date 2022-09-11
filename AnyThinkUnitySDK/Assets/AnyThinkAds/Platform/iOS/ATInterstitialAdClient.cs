using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AnyThinkAds.Common;
using AnyThinkAds.Api;
using AnyThinkAds.ThirdParty.LitJson;


namespace AnyThinkAds.iOS {
	
	public class ATInterstitialAdClient : IATInterstitialAdClient {
		private  ATInterstitialAdListener anyThinkListener;
		public event EventHandler<ATAdEventArgs>        onAdLoadEvent;
        public event EventHandler<ATAdErrorEventArgs>   onAdLoadFailureEvent;
        public event EventHandler<ATAdEventArgs>        onAdShowEvent;
        public event EventHandler<ATAdErrorEventArgs>   onAdShowFailureEvent;
        public event EventHandler<ATAdEventArgs>        onAdCloseEvent;
        public event EventHandler<ATAdEventArgs>        onAdClickEvent;
        public event EventHandler<ATAdEventArgs>        onAdVideoStartEvent;
        public event EventHandler<ATAdErrorEventArgs>   onAdVideoFailureEvent;
        public event EventHandler<ATAdEventArgs>        onAdVideoEndEvent;
        public event EventHandler<ATAdEventArgs>        onAdSourceAttemptEvent;
        public event EventHandler<ATAdEventArgs>        onAdSourceFilledEvent;
        public event EventHandler<ATAdErrorEventArgs>   onAdSourceLoadFailureEvent;
        public event EventHandler<ATAdEventArgs>        onAdSourceBiddingAttemptEvent;
        public event EventHandler<ATAdEventArgs>        onAdSourceBiddingFilledEvent;
        public event EventHandler<ATAdErrorEventArgs>   onAdSourceBiddingFailureEvent;

		public void addsetting(string placementId,string json){
			//todo...
		}

		public void setListener(ATInterstitialAdListener listener) {
			Debug.Log("Unity: ATInterstitialAdClient::setListener()");
	        anyThinkListener = listener;
	    }

	    public void loadInterstitialAd(string placementId, string mapJson) {
			Debug.Log("Unity: ATInterstitialAdClient::loadInterstitialAd()");
            ATInterstitialAdWrapper.setClientForPlacementID(placementId, this);
			ATInterstitialAdWrapper.loadInterstitialAd(placementId, mapJson);
		}

		public bool hasInterstitialAdReady(string placementId) {
			Debug.Log("Unity: ATInterstitialAdClient::hasInterstitialAdReady()");
			return ATInterstitialAdWrapper.hasInterstitialAdReady(placementId);
		}

		public void showInterstitialAd(string placementId, string mapJson) {
			Debug.Log("Unity: ATInterstitialAdClient::showInterstitialAd()");
			ATInterstitialAdWrapper.showInterstitialAd(placementId, mapJson);
		}

		public void cleanCache(string placementId) {
			Debug.Log("Unity: ATInterstitialAdClient::cleanCache()");
			ATInterstitialAdWrapper.clearCache(placementId);
		}

		public string checkAdStatus(string placementId) {
			Debug.Log("Unity: ATInterstitialAdClient::checkAdStatus()");
			return ATInterstitialAdWrapper.checkAdStatus(placementId);
		}

		public string getValidAdCaches(string placementId)
		{
			Debug.Log("Unity: ATInterstitialAdClient::getValidAdCaches()");
			return ATInterstitialAdWrapper.getValidAdCaches(placementId);
		}

		public void entryScenarioWithPlacementID(string placementId, string scenarioID){
            Debug.Log("Unity: ATInterstitialAdClient::entryScenarioWithPlacementID()");
			ATInterstitialAdWrapper.entryScenarioWithPlacementID(placementId,scenarioID);
		}


		//Callbacks
		public void OnInterstitialAdLoaded(string placementID) {
	      Debug.Log("onInterstitialAdLoaded...unity3d.");
            onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementID));
	    }

	    public void OnInterstitialAdLoadFailure(string placementID, string code, string error) {
	     	Debug.Log("onInterstitialAdFailed...unity3d.");
            onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementID, error, code));
	    }

	     public void OnInterstitialAdVideoPlayFailure(string placementID, string code, string error) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdVideoPlayFailure()");
	        onAdVideoFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementID, error, code));
	    }

	    public void OnInterstitialAdVideoPlayStart(string placementID, string callbackJson) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdPlayStart()");
	        onAdVideoStartEvent?.Invoke(this, new ATAdEventArgs(placementID, callbackJson));
	    }

	    public void OnInterstitialAdVideoPlayEnd(string placementID, string callbackJson) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdVideoPlayEnd()");
	         onAdVideoEndEvent?.Invoke(this, new ATAdEventArgs(placementID, callbackJson));
	    }

        public void OnInterstitialAdShow(string placementID, string callbackJson) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdShow()");
            onAdShowEvent?.Invoke(this, new ATAdEventArgs(placementID, callbackJson));
	    }

        public void OnInterstitialAdFailedToShow(string placementID) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdFailedToShow()");
	        onAdShowFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementID, "Failed to show video ad", "-1"));
	    }

        public void OnInterstitialAdClick(string placementID, string callbackJson) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdClick()");
             onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementID, callbackJson));
	    }

        public void OnInterstitialAdClose(string placementID, string callbackJson) {
	    	Debug.Log("Unity: ATInterstitialAdClient::OnInterstitialAdClose()");
            onAdCloseEvent?.Invoke(this, new ATAdEventArgs(placementID, callbackJson));
	    }
		
		//auto callbacks
	    public void startLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATInterstitialAdClient::startLoadingADSource()");
           onAdSourceAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    public void finishLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATInterstitialAdClient::finishLoadingADSource()");
           onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }	
	    public void failToLoadADSource(string placementId, string callbackJson,string code, string error) 
		{
	        Debug.Log("Unity: ATInterstitialAdClient::failToLoadADSource()");
	        onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
	    }
		public void startBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATInterstitialAdClient::startBiddingADSource()");
           onAdSourceBiddingAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    public void finishBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATInterstitialAdClient::finishBiddingADSource()");
          	onAdSourceBiddingFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }	
	    public void failBiddingADSource(string placementId,string callbackJson, string code, string error) 
		{
	        Debug.Log("Unity: ATInterstitialAdClient::failBiddingADSource()");
	        onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
	    }

	    // Auto
		public void addAutoLoadAdPlacementID(string[] placementIDList) 
		{
			Debug.Log("Unity: ATInterstitialAdClient:addAutoLoadAdPlacementID()");

		

	     	if (placementIDList != null && placementIDList.Length > 0)
            {
				foreach (string placementID in placementIDList)
        		{
					ATInterstitialAdWrapper.setClientForPlacementID(placementID, this);
				}

                string placementIDListString = JsonMapper.ToJson(placementIDList);
				ATInterstitialAdWrapper.addAutoLoadAdPlacementID(placementIDListString);
                Debug.Log("addAutoLoadAdPlacementID, placementIDList === " + placementIDListString);
            }
            else
            {
                Debug.Log("addAutoLoadAdPlacementID, placementIDList = null");
            } 		

		}

		public void removeAutoLoadAdPlacementID(string placementId) 
		{
			Debug.Log("Unity: ATInterstitialAdClient:removeAutoLoadAdPlacementID()");
			ATInterstitialAdWrapper.removeAutoLoadAdPlacementID(placementId);
		}

		public bool autoLoadInterstitialAdReadyForPlacementID(string placementId) 
		{
			Debug.Log("Unity: ATInterstitialAdClient:autoLoadInterstitialAdReadyForPlacementID()");
			return ATInterstitialAdWrapper.autoLoadInterstitialAdReadyForPlacementID(placementId);
		}
		public string getAutoValidAdCaches(string placementId)
		{
			Debug.Log("Unity: ATInterstitialAdClient:getAutoValidAdCaches()");
			return ATInterstitialAdWrapper.getAutoValidAdCaches(placementId);
		}

		public string checkAutoAdStatus(string placementId) {
			Debug.Log("Unity: ATInterstitialAdClient::checkAutoAdStatus()");
			return ATInterstitialAdWrapper.checkAutoAdStatus(placementId);
		}	


		public void setAutoLocalExtra(string placementId, string mapJson) 
		{
			Debug.Log("Unity: ATInterstitialAdClient:setAutoLocalExtra()");
			ATInterstitialAdWrapper.setAutoLocalExtra(placementId, mapJson);
		}
		public void entryAutoAdScenarioWithPlacementID(string placementId, string scenarioID) 
		{
			Debug.Log("Unity: ATInterstitialAdClient:entryAutoAdScenarioWithPlacementID()");
			ATInterstitialAdWrapper.entryAutoAdScenarioWithPlacementID(placementId, scenarioID);
		}
		public void showAutoAd(string placementId, string mapJson) 
		{
	    	Debug.Log("Unity: ATInterstitialAdClient::showAutoAd()");
	    	ATInterstitialAdWrapper.showAutoInterstitialAd(placementId, mapJson);
	    }


	}
}
