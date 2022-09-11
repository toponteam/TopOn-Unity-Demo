using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AnyThinkAds.Common;
using AnyThinkAds.Api;
using System;

namespace AnyThinkAds.iOS {
	public class ATBannerAdClient : IATBannerAdClient {


        public event EventHandler<ATAdEventArgs> onAdLoadEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdLoadFailureEvent;
        public event EventHandler<ATAdEventArgs> onAdImpressEvent;
        public event EventHandler<ATAdEventArgs> onAdClickEvent;
        public event EventHandler<ATAdEventArgs> onAdAutoRefreshEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdAutoRefreshFailureEvent;
        public event EventHandler<ATAdEventArgs> onAdCloseEvent;
        public event EventHandler<ATAdEventArgs> onAdCloseButtonTappedEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceAttemptEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceFilledEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdSourceLoadFailureEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceBiddingAttemptEvent;
        public event EventHandler<ATAdEventArgs> onAdSourceBiddingFilledEvent;
        public event EventHandler<ATAdErrorEventArgs> onAdSourceBiddingFailureEvent;

		private  ATBannerAdListener anyThinkListener;
		

		public void addsetting(string placementId,string json){
			//todo...
		}

		public void setListener(ATBannerAdListener listener) {
			Debug.Log("Unity: ATBannerAdClient::setListener()");
	        anyThinkListener = listener;
	    }

	    public void loadBannerAd(string placementId, string mapJson) {
			Debug.Log("Unity: ATBannerAdClient::loadBannerAd()");
			ATBannerAdWrapper.setClientForPlacementID(placementId, this);
			ATBannerAdWrapper.loadBannerAd(placementId, mapJson);
	    }

	    public string checkAdStatus(string placementId) {
            Debug.Log("Unity: ATBannerAdClient::checkAdStatus()");
            return ATBannerAdWrapper.checkAdStatus(placementId);
        }

		public string getValidAdCaches(string placementId)
		{
			Debug.Log("Unity: ATBannerAdClient::getValidAdCaches()");
			return ATBannerAdWrapper.getValidAdCaches(placementId);
		}

		public void showBannerAd(string placementId, ATRect rect) {
			Debug.Log("Unity: ATBannerAdClient::showBannerAd()");
			ATBannerAdWrapper.showBannerAd(placementId, rect);
	    }

	    public void showBannerAd(string placementId, ATRect rect, string mapJson) {
			Debug.Log("Unity: ATBannerAdClient::showBannerAd()");
			ATBannerAdWrapper.showBannerAd(placementId, rect, mapJson);
	    }

        public void showBannerAd(string placementId, string position)
        {
            Debug.Log("Unity: ATBannerAdClient::showBannerAd()");
            ATBannerAdWrapper.showBannerAd(placementId, position);
        }

        public void showBannerAd(string placementId, string position, string mapJson)
        {
            Debug.Log("Unity: ATBannerAdClient::showBannerAd()");
            ATBannerAdWrapper.showBannerAd(placementId, position, mapJson);
        }

        public void cleanBannerAd(string placementId) {
			Debug.Log("Unity: ATBannerAdClient::cleanBannerAd()");	
			ATBannerAdWrapper.cleanBannerAd(placementId);	
	    }

	    public void hideBannerAd(string placementId) {
	    	Debug.Log("Unity: ATBannerAdClient::hideBannerAd()");	
			ATBannerAdWrapper.hideBannerAd(placementId);
	    }

	    public void showBannerAd(string placementId) {
	    	Debug.Log("Unity: ATBannerAdClient::showBannerAd()");	
			ATBannerAdWrapper.showBannerAd(placementId);
	    }

        public void cleanCache(string placementId) {
			Debug.Log("Unity: ATBannerAdClient::cleanCache()");
			ATBannerAdWrapper.clearCache();
        }

       
        public void OnBannerAdLoad(string placementId) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdLoad()");
	        onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId));
	    }
	    
	    public void OnBannerAdLoadFail(string placementId, string code, string message) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdLoadFail()");
	        onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, message, code));
	    }
	    
	    public void OnBannerAdImpress(string placementId, string callbackJson) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdImpress()");
            onAdImpressEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    
        public void OnBannerAdClick(string placementId, string callbackJson) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdClick()");
            onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    
        public void OnBannerAdAutoRefresh(string placementId, string callbackJson) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdAutoRefresh()");
            onAdAutoRefreshEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    
	    public void OnBannerAdAutoRefreshFail(string placementId, string code, string message) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdAutoRefreshFail()");
	        onAdAutoRefreshFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, message, code));
	    }

	    public void OnBannerAdClose(string placementId) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdClose()");
	        onAdCloseEvent?.Invoke(this, new ATAdEventArgs(placementId));
	    }

	    public void OnBannerAdCloseButtonTapped(string placementId, string callbackJson) {
			Debug.Log("Unity: HBBannerAdWrapper::OnBannerAdCloseButton()");
	        onAdCloseButtonTappedEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
		//auto callbacks
	    public void startLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: HBBannerAdWrapper::startLoadingADSource()");
            onAdSourceAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    public void finishLoadingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: HBBannerAdWrapper::finishLoadingADSource()");
            onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }	
	    public void failToLoadADSource(string placementId,string callbackJson, string code, string error) 
		{
	        Debug.Log("Unity: HBBannerAdWrapper::failToLoadADSource()");
	        onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
	    }
		public void startBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: HBBannerAdWrapper::startBiddingADSource()");
            onAdSourceBiddingAttemptEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }
	    public void finishBiddingADSource(string placementId, string callbackJson) 
		{
	        Debug.Log("Unity: HBBannerAdWrapper::finishBiddingADSource()");
            onAdSourceBiddingFilledEvent?.Invoke(this, new ATAdEventArgs(placementId, callbackJson));
	    }	
	    public void failBiddingADSource(string placementId, string callbackJson,string code, string error) 
		{
	        Debug.Log("Unity: HBBannerAdWrapper::failBiddingADSource()");
	        onAdSourceBiddingFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, callbackJson, code, error));
	    }

	}
}