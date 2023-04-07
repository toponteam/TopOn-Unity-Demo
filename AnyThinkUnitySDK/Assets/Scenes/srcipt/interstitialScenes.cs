using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using AnyThinkAds.Api;
using UnityEngine.UI;

using AnyThinkAds.ThirdParty.LitJson;


public class interstitialScenes : MonoBehaviour {




#if UNITY_ANDROID
    static string mPlacementId_interstitial_all = "b5baca53984692";
    static string showingScenario = "f5e71c49060ab3";

#elif UNITY_IOS || UNITY_IPHONE
    static string mPlacementId_interstitial_all = "b5bacad26a752a";
    static string showingScenario = "f5e549727efc49";

#endif


    // Use this for initialization
    void Start () {
		ATInterstitialAd.Instance.client.onAdLoadEvent += onAdLoad; 
        ATInterstitialAd.Instance.client.onAdClickEvent += onAdClick;
        ATInterstitialAd.Instance.client.onAdCloseEvent += onAdClose;
        ATInterstitialAd.Instance.client.onAdShowEvent += onShow;
        ATInterstitialAd.Instance.client.onAdLoadFailureEvent += onAdLoadFail;
        ATInterstitialAd.Instance.client.onAdShowFailureEvent += onAdShowFail;
        ATInterstitialAd.Instance.client.onAdVideoStartEvent  += startVideoPlayback;
        ATInterstitialAd.Instance.client.onAdVideoEndEvent  += endVideoPlayback;
        ATInterstitialAd.Instance.client.onAdVideoFailureEvent  += failVideoPlayback;
        ATInterstitialAd.Instance.client.onAdSourceAttemptEvent += startLoadingADSource;
        ATInterstitialAd.Instance.client.onAdSourceFilledEvent += finishLoadingADSource;
        ATInterstitialAd.Instance.client.onAdSourceLoadFailureEvent += failToLoadADSource;
        ATInterstitialAd.Instance.client.onAdSourceBiddingAttemptEvent += startBiddingADSource;
        ATInterstitialAd.Instance.client.onAdSourceBiddingFilledEvent += finishBiddingADSource;
        ATInterstitialAd.Instance.client.onAdSourceBiddingFailureEvent += failBiddingADSource;
	}
    
    void OnDestroy(){
        ATInterstitialAd.Instance.client.onAdLoadEvent -= onAdLoad; 
        ATInterstitialAd.Instance.client.onAdClickEvent -= onAdClick;
        ATInterstitialAd.Instance.client.onAdCloseEvent -= onAdClose;
        ATInterstitialAd.Instance.client.onAdShowEvent -= onShow;
        ATInterstitialAd.Instance.client.onAdLoadFailureEvent -= onAdLoadFail;
        ATInterstitialAd.Instance.client.onAdShowFailureEvent -= onAdShowFail;
        ATInterstitialAd.Instance.client.onAdVideoStartEvent  -= startVideoPlayback;
        ATInterstitialAd.Instance.client.onAdVideoEndEvent  -= endVideoPlayback;
        ATInterstitialAd.Instance.client.onAdVideoFailureEvent  -= failVideoPlayback;
        ATInterstitialAd.Instance.client.onAdSourceAttemptEvent -= startLoadingADSource;
        ATInterstitialAd.Instance.client.onAdSourceFilledEvent -= finishLoadingADSource;
        ATInterstitialAd.Instance.client.onAdSourceLoadFailureEvent -= failToLoadADSource;
        ATInterstitialAd.Instance.client.onAdSourceBiddingAttemptEvent -= startBiddingADSource;
        ATInterstitialAd.Instance.client.onAdSourceBiddingFilledEvent -= finishBiddingADSource;
        ATInterstitialAd.Instance.client.onAdSourceBiddingFailureEvent -= failBiddingADSource;
    }
	
	// Update is called once per frame
	void Update () {
		
	}

	public void gotoMainScenes(){
		Debug.Log ("Developer gotoMainScenes");
		AnyThinkAds.Demo.ATManager.printLogI ("Developer gotoMainScenes....");
		SceneManager.LoadScene ("demoMainScenes");
	}

    // static InterstitalCallback callback;
    public void loadInterstitialAd() {
        
       

        Dictionary<string,object> jsonmap = new Dictionary<string, object>();
        jsonmap.Add(AnyThinkAds.Api.ATConst.USE_REWARDED_VIDEO_AS_INTERSTITIAL, AnyThinkAds.Api.ATConst.USE_REWARDED_VIDEO_AS_INTERSTITIAL_NO);
        //jsonmap.Add(AnyThinkAds.Api.ATConst.USE_REWARDED_VIDEO_AS_INTERSTITIAL, AnyThinkAds.Api.ATConst.USE_REWARDED_VIDEO_AS_INTERSTITIAL_YES);

        ATInterstitialAd.Instance.loadInterstitialAd(mPlacementId_interstitial_all, jsonmap);
    }

    public void isReady()
    {
        bool b = ATInterstitialAd.Instance.hasInterstitialAdReady(mPlacementId_interstitial_all);
        Debug.Log("Developer isReady interstitial...." + b);

        string adStatus = ATInterstitialAd.Instance.checkAdStatus(mPlacementId_interstitial_all);
        Debug.Log("Developer checkAdStatus interstitial...." + adStatus);

        string adCaches = ATInterstitialAd.Instance.getValidAdCaches(mPlacementId_interstitial_all);
        Debug.Log("Developer getValidAdCaches interstitial...." + adCaches);

        ATInterstitialAd.Instance.entryScenarioWithPlacementID(mPlacementId_interstitial_all, showingScenario);

    }

    public void showInterstitialAd() {
        Dictionary<string, string> jsonmap = new Dictionary<string, string>();
        jsonmap.Add(AnyThinkAds.Api.ATConst.SCENARIO, showingScenario);

        ATInterstitialAd.Instance.showInterstitialAd(mPlacementId_interstitial_all, jsonmap);
    }


    // auto load
    public void addAutoLoadAdPlacementID()
    {
       
        ATInterstitialAutoAd.Instance.client.onAdLoadEvent += onAdLoad; 
        ATInterstitialAutoAd.Instance.client.onAdClickEvent += onAdClick;
        ATInterstitialAutoAd.Instance.client.onAdCloseEvent += onAdClose;
        ATInterstitialAutoAd.Instance.client.onAdShowEvent += onShow;
        ATInterstitialAutoAd.Instance.client.onAdLoadFailureEvent += onAdLoadFail;
        ATInterstitialAutoAd.Instance.client.onAdShowFailureEvent += onAdShowFail;      
        ATInterstitialAutoAd.Instance.client.onAdVideoStartEvent  += startVideoPlayback;
        ATInterstitialAutoAd.Instance.client.onAdVideoEndEvent  += endVideoPlayback;
        ATInterstitialAutoAd.Instance.client.onAdVideoFailureEvent  += failVideoPlayback;
        //No AdSource Event

        string[] jsonList = {mPlacementId_interstitial_all};

        ATInterstitialAutoAd.Instance.addAutoLoadAdPlacementID(jsonList);
    }
    
    public void onSuccessResponse(object sender,ATAdEventArgs erg){
        Debug.Log("Developer suceess reponse:"+sender+erg.placementId+"->"+JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
    }

     public void onFailResponse(object sender,ATAdErrorEventArgs erg){
       Debug.Log("Developer fail reponse :"+sender+" : " +erg.placementId + "--erg.errorCode:" + erg.errorCode + "--msg:" + erg.errorMessage);
    }
  
  
    public void onAdClick(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdClick :" +erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

    public void onAdClose(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdClose :" + erg.placementId);
        }

    public void onAdLoad(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdLoad :" + erg.placementId);
        }

    public void onShow(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onShow :" + erg.placementId);
        }


    public void onAdLoadFail(object sender,ATAdErrorEventArgs erg )
        {
            Debug.Log("Developer callback onAdLoadFail : : " +erg.placementId + "--erg.errorCode:" + erg.errorCode + "--msg:" + erg.errorMessage);
        }

    public void onAdShowFail(object sender,ATAdErrorEventArgs erg){
        Debug.Log("Developer callback show fail :" + erg.placementId);
    }
    public void startVideoPlayback(object sender,ATAdEventArgs erg){
            Debug.Log("Developer startVideoPlayback------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

    }
    public void endVideoPlayback(object sender,ATAdEventArgs erg){
            Debug.Log("Developer endVideoPlayback------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

    }
    public void failVideoPlayback(object sender,ATAdEventArgs erg){
            Debug.Log("Developer failVideoPlayback------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

    }

    public void startLoadingADSource(object sender,ATAdEventArgs erg){
            Debug.Log("Developer startLoadingADSource------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

        }

	public void finishLoadingADSource(object sender,ATAdEventArgs erg){
            Debug.Log("Developer finishLoadingADSource------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

        }

	public void failToLoadADSource(object sender,ATAdErrorEventArgs erg ){
            Debug.Log("Developer failToLoadADSource------erg.errorCode:" + erg.errorCode + "---erg.errorMessage:" + erg.errorMessage+ "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

        }

	public void startBiddingADSource(object sender,ATAdEventArgs erg){
            Debug.Log("Developer startBiddingADSource------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

        }

	public void finishBiddingADSource(object sender,ATAdEventArgs erg){
            Debug.Log("Developer finishBiddingADSource------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

        }

	public void failBiddingADSource(object sender,ATAdErrorEventArgs erg ){
            Debug.Log("Developer failBiddingADSource------erg.errorCode:" + erg.errorCode + "---erg.errorMessage:" + erg.errorMessage+ "->" + JsonMapper.ToJson(erg.callbackInfo.toAdsourceDictionary()));

        }
    public void autoReadyForPlacementID()
    {
        ATInterstitialAutoAd.Instance.setAutoLocalExtra(mPlacementId_interstitial_all,new Dictionary<string, string> { { "placement_custom_key", "placement_custom" } });

        ATInterstitialAutoAd.Instance.entryAutoAdScenarioWithPlacementID(mPlacementId_interstitial_all, showingScenario);
        bool b = ATInterstitialAutoAd.Instance.autoLoadInterstitialAdReadyForPlacementID(mPlacementId_interstitial_all);
        Debug.Log("Developer isReady auto interstitial...." + b);

        string adCaches = ATInterstitialAutoAd.Instance.checkAutoAdStatus(mPlacementId_interstitial_all);
        Debug.Log("Developer checkAutoAdStatus interstitial...." + adCaches);
    }
     public void showAutoAd()
    {
        Dictionary<string, string> jsonmap = new Dictionary<string, string>();
        jsonmap.Add(AnyThinkAds.Api.ATConst.SCENARIO, showingScenario);

        ATInterstitialAutoAd.Instance.showAutoAd(mPlacementId_interstitial_all,jsonmap);
    }
    public void removeAutoLoadAdPlacementID()
    {
        string[] jsonList = { mPlacementId_interstitial_all};
        ATInterstitialAutoAd.Instance.removeAutoLoadAdPlacementID(jsonList);
    }


}
