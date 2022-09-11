using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AnyThinkAds.Common;
using AnyThinkAds.Api;
using AnyThinkAds.ThirdParty.LitJson;

namespace AnyThinkAds.iOS {
	public class ATRewardedVideoAdClient : IATRewardedVideoAdClient {

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

		private  ATRewardedVideoListener anyThinkListener;

		public void addsetting (string placementId,string json){
			//todo...
		}
		public void setListener(ATRewardedVideoListener listener) {
			Debug.Log("Unity: ATRewardedVideoAdClient::setListener()");
	        anyThinkListener = listener;
	    }

		public void loadVideoAd(string placementId, string mapJson) {
			Debug.Log("Unity: ATRewardedVideoAdClient::loadVideoAd()");
			ATRewardedVideoWrapper.setClientForPlacementID(placementId, this);
			ATRewardedVideoWrapper.loadRewardedVideo(placementId, mapJson);
		}

		public bool hasAdReady(string placementId) {
			Debug.Log("Unity: ATRewardedVideoAdClient::hasAdReady()");
			return ATRewardedVideoWrapper.isRewardedVideoReady(placementId);
		}

		//To be implemented
		public void setUserData(string placementId, string userId, string customData) {
			Debug.Log("Unity: ATRewardedVideoAdClient::setUserData()");
	    }

	    public void showAd(string placementId, string mapJson) {
	    	Debug.Log("Unity: ATRewardedVideoAdClient::showAd()");
	    	ATRewardedVideoWrapper.showRewardedVideo(placementId, mapJson);
	    }

	    public void cleanAd(string placementId) {
	    	Debug.Log("Unity: ATRewardedVideoAdClient::cleanAd()");
	    	ATRewardedVideoWrapper.clearCache();
	    }

	    public void onApplicationForces(string placementId) {
			Debug.Log("Unity: ATRewardedVideoAdClient::onApplicationForces()");
	    }

	    public void onApplicationPasue(string placementId) {
			Debug.Log("Unity: ATRewardedVideoAdClient::onApplicationPasue()");
	    }

	    public string checkAdStatus(string placementId) {
	    	Debug.Log("Unity: ATRewardedVideoAdClient::checkAdStatus()");
	    	return ATRewardedVideoWrapper.checkAdStatus(placementId);
	    }

		public void entryScenarioWithPlacementID(string placementId, string scenarioID){
            Debug.Log("Unity: ATRewardedVideoAdClient::entryScenarioWithPlacementID()");
			ATRewardedVideoWrapper.entryScenarioWithPlacementID(placementId,scenarioID);
		}

		public string getValidAdCaches(string placementId)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient::getValidAdCaches()");
			return ATRewardedVideoWrapper.getValidAdCaches(placementId);
		}

        // Auto
		public void addAutoLoadAdPlacementID(string[] placementIDList)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient:addAutoLoadAdPlacementID()");

	     	if (placementIDList != null && placementIDList.Length > 0)
            {
				foreach (string placementID in placementIDList)
        		{
					ATRewardedVideoWrapper.setClientForPlacementID(placementID, this);
				}

                string placementIDListString = JsonMapper.ToJson(placementIDList);
				ATRewardedVideoWrapper.addAutoLoadAdPlacementID(placementIDListString);
                Debug.Log("addAutoLoadAdPlacementID, placementIDList === " + placementIDListString);
            }
            else
            {
                Debug.Log("addAutoLoadAdPlacementID, placementIDList = null");
            } 			
		}

		public void removeAutoLoadAdPlacementID(string placementId) 
		{
			Debug.Log("Unity: ATRewardedVideoAdClient:removeAutoLoadAdPlacementID()");
			ATRewardedVideoWrapper.removeAutoLoadAdPlacementID(placementId);
		}

		public bool autoLoadRewardedVideoReadyForPlacementID(string placementId) 
		{
			Debug.Log("Unity: ATRewardedVideoAdClient:autoLoadRewardedVideoReadyForPlacementID()");
			return ATRewardedVideoWrapper.autoLoadRewardedVideoReadyForPlacementID(placementId);
		}
		public string getAutoValidAdCaches(string placementId)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient:getAutoValidAdCaches()");
			return ATRewardedVideoWrapper.getAutoValidAdCaches(placementId);
		}
		public string checkAutoAdStatus(string placementId) {
	    	Debug.Log("Unity: ATRewardedVideoAdClient::checkAutoAdStatus()");
	    	return ATRewardedVideoWrapper.checkAutoAdStatus(placementId);
	    }

		public void setAutoLocalExtra(string placementId, string mapJson) 
		{
			Debug.Log("Unity: ATRewardedVideoAdClient:setAutoLocalExtra()");
			ATRewardedVideoWrapper.setAutoLocalExtra(placementId, mapJson);
		}
		public void entryAutoAdScenarioWithPlacementID(string placementId, string scenarioID) 
		{
			Debug.Log("Unity: ATRewardedVideoAdClient:entryAutoAdScenarioWithPlacementID()");
			ATRewardedVideoWrapper.entryAutoAdScenarioWithPlacementID(placementId, scenarioID);
		}
		public void showAutoAd(string placementId, string mapJson) 
		{
	    	Debug.Log("Unity: ATRewardedVideoAdClient::showAutoAd()");
	    	ATRewardedVideoWrapper.showAutoRewardedVideo(placementId, mapJson);
	    }

		//auto callbacks
	    public void startLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATRewardedVideoAdClient::startLoadingADSource()");
           onAdSourceAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    public void finishLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATRewardedVideoAdClient::finishLoadingADSource()");
           	onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }	
	    public void failToLoadADSource(string placementId, string callbackJson,string code, string error) 
		{
	        Debug.Log("Unity: ATRewardedVideoAdClient::failToLoadADSource()");
	       	onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
	    }
		public void startBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATRewardedVideoAdClient::startBiddingADSource()");
            onAdSourceBiddingAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    public void finishBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATRewardedVideoAdClient::finishBiddingADSource()");
           	onAdSourceBiddingFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }	
	    public void failBiddingADSource(string placementId, string callbackJson,string code, string error) 
		{
	        Debug.Log("Unity: ATRewardedVideoAdClient::failBiddingADSource()");
	        onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
	    }

		//Callbacks
		public void onRewardedVideoAdLoaded(string placementId) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdLoaded()");
	         onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId));
	    }

	    public void onRewardedVideoAdFailed(string placementId, string code, string error) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdFailed()");
	        onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, error, code));
	    }

        public void onRewardedVideoAdPlayStart(string placementId, string callbackJson) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdPlayStart()");
            onAdVideoStartEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }

        public void onRewardedVideoAdPlayEnd(string placementId, string callbackJson) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdPlayEnd()");
            onAdVideoEndEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }

	    public void onRewardedVideoAdPlayFailed(string placementId, string code, string error) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdPlayFailed()");
	        onAdVideoFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, error, code));
	    }

        public void onRewardedVideoAdClosed(string placementId, bool isRewarded, string callbackJson) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdClosed()");
             onAdVideoCloseEvent?.Invoke(this, new ATAdRewardEventArgs(placementId, callbackJson, isRewarded));
	    }

        public void onRewardedVideoAdPlayClicked(string placementId, string callbackJson) {
	        Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdPlayClicked()");
            onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }

        public void onRewardedVideoReward(string placementId, string callbackJson) {
            Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoReward()");
            onRewardEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
        }

		//--------again callback-------
		public void onRewardedVideoAdAgainPlayStart(string placementId, string callbackJson)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdAgainPlayStart()");
			onPlayAgainStart?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
		}

		public void onRewardedVideoAdAgainPlayEnd(string placementId, string callbackJson)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdAgainPlayEnd()");
			onPlayAgainEnd?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
		}


		public void onRewardedVideoAdAgainPlayFailed(string placementId, string code, string error)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdAgainPlayFailed()");
			onPlayAgainFailure?.Invoke(this, new ATAdErrorEventArgs(placementId, error, code));
		}


		public void onRewardedVideoAdAgainPlayClicked(string placementId, string callbackJson)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient::onRewardedVideoAdAgainPlayClicked()");
			onPlayAgainClick?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
		}


		public void onAgainReward(string placementId, string callbackJson)
		{
			Debug.Log("Unity: ATRewardedVideoAdClient::onAgainReward()");
			onPlayAgainReward?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
		}

	}
}
