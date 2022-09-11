using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AnyThinkAds.Common;
using AnyThinkAds.Api;
using AnyThinkAds.iOS;
using AnyThinkAds.ThirdParty.LitJson;
#pragma warning disable 0067
namespace AnyThinkAds.iOS {
	public class ATNativeAdClient : IATNativeAdClient {

        public event EventHandler<ATAdEventArgs> onAdLoadEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdLoadFailureEvent;
        public event EventHandler<ATAdEventArgs> onAdImpressEvent;
        public event EventHandler<ATAdEventArgs> onAdClickEvent;
        public event EventHandler<ATAdEventArgs> onAdVideoStartEvent;
        public event EventHandler<ATAdEventArgs> onAdVideoEndEvent;
        public event EventHandler<ATAdProgressEventArgs> onAdVideoProgressEvent;
        public event EventHandler<ATAdEventArgs> onAdCloseEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceAttemptEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceFilledEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdSourceLoadFailureEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceBiddingAttemptEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceBiddingFilledEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdSourceBiddingFailureEvent;

		private ATNativeAdListener mlistener;
		public void loadNativeAd(string placementId, string mapJson) {
            Debug.Log("Unity:ATNativeAdClient::loadNativeAd()");
            ATNativeAdWrapper.setClientForPlacementID(placementId, this);
            ATNativeAdWrapper.loadNativeAd(placementId, mapJson);
        }

		public void setLocalExtra (string placementId,string localExtra){
			
		}

        public bool hasAdReady(string placementId) {
            Debug.Log("Unity:ATNativeAdClient::hasAdReady()");
			return ATNativeAdWrapper.isNativeAdReady(placementId);
        }

        public string checkAdStatus(string placementId) {
            Debug.Log("Unity: ATNativeAdClient::checkAdStatus()");
            return ATNativeAdWrapper.checkAdStatus(placementId);
        }

        public void entryScenarioWithPlacementID(string placementId, string scenarioID){

            Debug.Log("Unity: ATNativeAdClient::entryScenarioWithPlacementID()");
			ATNativeAdWrapper.entryScenarioWithPlacementID(placementId,scenarioID);
		}


        public string getValidAdCaches(string placementId)
        {
            Debug.Log("Unity: ATNativeAdClient::getValidAdCaches()");
            return ATNativeAdWrapper.getValidAdCaches(placementId);
        }

        public void setListener(ATNativeAdListener listener) {
            Debug.Log("Unity:ATNativeAdClient::setListener()");
            mlistener = listener;
        }

		public void renderAdToScene(string placementId, ATNativeAdView anyThinkNativeAdView) {	
            Debug.Log("Unity:ATNativeAdClient::renderAdToScene()");
            ATNativeAdWrapper.showNativeAd(placementId, anyThinkNativeAdView.toJSON());
        }

        public void renderAdToScene(string placementId, ATNativeAdView anyThinkNativeAdView, string mapJson) {  
            Debug.Log("Unity:ATNativeAdClient::renderAdToScene()");
            ATNativeAdWrapper.showNativeAd(placementId, anyThinkNativeAdView.toJSON(), mapJson);
        }

        public void cleanAdView(string placementId, ATNativeAdView anyThinkNativeAdView) {
			Debug.Log("Unity:ATNativeAdClient::cleanAdView()");
            ATNativeAdWrapper.removeNativeAdView(placementId);
        }

        public void onApplicationForces(string placementId, ATNativeAdView anyThinkNativeAdView) {
			Debug.Log("Unity:ATNativeAdClient::onApplicationForces()");
        }

        public void onApplicationPasue(string placementId, ATNativeAdView anyThinkNativeAdView) {
			Debug.Log("Unity:ATNativeAdClient::onApplicationPasue()");
        }

        public void cleanCache(string placementId) {
			Debug.Log("Unity:ATNativeAdClient::cleanCache()");
            ATNativeAdWrapper.clearCache();
        }

        //Callbacks
        public void onAdImpressed(string placementId, string callbackJson) {
            Debug.Log("Unity:ATNativeAdClient::onAdImpressed...unity3d.");

            onAdImpressEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        
        }

        public void onAdClicked(string placementId, string callbackJson) {
            Debug.Log("Unity:ATNativeAdClient::onAdClicked...unity3d.");
              onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
         
        }

        public void onAdCloseButtonClicked(string placementId, string callbackJson)
        {
            Debug.Log("Unity:ATNativeAdClient::onAdCloseButtonClicked...unity3d.");
            onAdCloseEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
       
        }

        public void onAdVideoStart(string placementId) {
            Debug.Log("Unity:ATNativeAdClient::onAdVideoStart...unity3d.");
            onAdVideoStartEvent?.Invoke(this, new ATAdEventArgs(placementId));
            
        }

        public void onAdVideoEnd(string placementId) {
            Debug.Log("Unity:ATNativeAdClient::onAdVideoEnd...unity3d.");
              onAdVideoEndEvent?.Invoke(this, new ATAdEventArgs(placementId,""));
        }

        public void onAdVideoProgress(string placementId,int progress) {
            Debug.Log("Unity:ATNativeAdClient::onAdVideoProgress...progress[" + progress + "]");
            onAdVideoProgressEvent?.Invoke(this, new ATAdProgressEventArgs(placementId,"",progress));
        }

        public void onNativeAdLoaded(string placementId) {
            Debug.Log("Unity:ATNativeAdClient::onNativeAdLoaded...unity3d.");
            onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId,""));
        
        }

        public void onNativeAdLoadFail(string placementId,string code, string msg) {
            Debug.Log("Unity:ATNativeAdClient::onNativeAdLoadFail...unity3d. code:" + code + " msg:" + msg);
            onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId,code,msg));
        }

		//auto callbacks
	    public void startLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATNativeAdClient::startLoadingADSource()");
             onAdSourceAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
	    }
	    public void finishLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATNativeAdClient::finishLoadingADSource()");
             onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
           
	    }	
	    public void failToLoadADSource(string placementId,string callbackJson, string code, string error) 
		{
	        Debug.Log("Unity: ATNativeAdClient::failToLoadADSource()");
             onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId,code,error));
	       
	    }
		public void startBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATNativeAdClient::startBiddingADSource()");
            onAdSourceBiddingAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
     
	    }
	    public void finishBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: ATNativeAdClient::finishBiddingADSource()");
            onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
            
	    }	

	    public void failBiddingADSource(string placementId,string callbackJson, string code, string error) 
		{
	        Debug.Log("Unity: ATNativeAdClient::failBiddingADSource()");
            onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId,callbackJson,code,error));
	        
	    }

	}
}
