using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using AnyThinkAds.Common;
using AnyThinkAds.Api;
#pragma warning disable 0067
namespace AnyThinkAds.Android
{
    public class ATNativeBannerAdClient :IATNativeBannerAdClient
    {
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
        public ATNativeBannerAdClient() {

        }

    	public void loadAd(string placementId, string mapJson) {

    	}
    	
		public bool adReady(string placementId) {
			return false;
		}

        public void setListener(ATNativeBannerAdListener listener) {

        }

        public void showAd(string placementId, ATRect rect, Dictionary<string, string> pairs) {

        }

        public void removeAd(string placementId) {

        }
        
         public void onAdLoaded(string placementId) {
        	Debug.Log("ATNativeBannerAdClient::onAdLoaded()");
        	onAdLoadEvent?.Invoke(this, new ATAdEventArgs(placementId));
        }
        
        public void onAdLoadFail(string placementId, string code, string message) {
        	Debug.Log("ATNativeBannerAdClient::onAdLoadFail()");
            onAdLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, "", code, message));
     
        }
        
        public void onAdImpressed(string placementId, string callbackJson) {
        	Debug.Log("ATNativeBannerAdClient::onAdImpressed()");
            onAdImpressEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
       
        }
        
        public void onAdClicked(string placementId, string callbackJson) {
        	Debug.Log("ATNativeBannerAdClient::onAdClicked()");
            onAdClickEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
        }
        
        public void onAdAutoRefresh(string placementId, string callbackJson) {
        	Debug.Log("ATNativeBannerAdClient::onAdAutoRefresh()");
            onAdSourceFilledEvent?.Invoke(this, new ATAdEventArgs(placementId,callbackJson));
    
        }
        
		public void onAdAutoRefreshFailure(string placementId, string code, string message) {
        	Debug.Log("ATNativeBannerAdClient::onAdAutoRefreshFailure()");
            onAdSourceLoadFailureEvent?.Invoke(this, new ATAdErrorEventArgs(placementId, "", code, message));
        	
        }

        public void onAdCloseButtonClicked(string placementId) {
        	Debug.Log("ATNativeBannerAdClient::onAdCloseButtonClicked()");
            onAdCloseEvent?.Invoke(this, new ATAdEventArgs(placementId));
  
        }
    }
}
