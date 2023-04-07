using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using AnyThinkAds.Api;
using UnityEngine.UI;
using AnyThinkAds.ThirdParty.LitJson;

public class vidoeScenes : MonoBehaviour {

#if UNITY_ANDROID
    static string mPlacementId_rewardvideo_all = "b5b449fb3d89d7";
    static string showingScenario = "f5e71c46d1a28f";
#elif UNITY_IOS || UNITY_IPHONE
    static string mPlacementId_rewardvideo_all = "b5b44a0f115321";//"b5b44a0f115321";
    static string showingScenario = "f5e54970dc84e6";

#endif

    ATRewardedVideo rewardedVideo;
	
 
	// Use this for initialization
	void Start () {
          
        ATRewardedVideo.Instance.client.onRewardEvent += onReward;
        ATRewardedVideo.Instance.client.onAdVideoCloseEvent += onAdVideoClosedEvent;
        ATRewardedVideo.Instance.client.onAdVideoEndEvent += onAdVideoEndEvent;
        ATRewardedVideo.Instance.client.onAdVideoStartEvent += onAdVideoStartEvent;
        ATRewardedVideo.Instance.client.onAdClickEvent += onAdClick;
        ATRewardedVideo.Instance.client.onPlayAgainStart += onRewardedVideoAdAgainPlayStart;
        ATRewardedVideo.Instance.client.onPlayAgainFailure += onRewardedVideoAdAgainPlayFail;
        ATRewardedVideo.Instance.client.onPlayAgainEnd += onRewardedVideoAdAgainPlayEnd;
        ATRewardedVideo.Instance.client.onPlayAgainClick += onRewardedVideoAdAgainPlayClicked;
        ATRewardedVideo.Instance.client.onPlayAgainReward += onAgainReward;
        ATRewardedVideo.Instance.client.onAdSourceAttemptEvent += startLoadingADSource;
        ATRewardedVideo.Instance.client.onAdSourceFilledEvent += finishLoadingADSource;
        ATRewardedVideo.Instance.client.onAdSourceLoadFailureEvent += failToLoadADSource;
        ATRewardedVideo.Instance.client.onAdSourceBiddingAttemptEvent += startBiddingADSource;
        ATRewardedVideo.Instance.client.onAdSourceBiddingFilledEvent += finishBiddingADSource;
        ATRewardedVideo.Instance.client.onAdSourceBiddingFailureEvent += failBiddingADSource;

	}

    void OnDestroy(){
          ATRewardedVideo.Instance.client.onRewardEvent -= onReward;
        ATRewardedVideo.Instance.client.onAdVideoCloseEvent -= onAdVideoClosedEvent;
        ATRewardedVideo.Instance.client.onAdVideoEndEvent -= onAdVideoEndEvent;
        ATRewardedVideo.Instance.client.onAdVideoStartEvent -= onAdVideoStartEvent;
        ATRewardedVideo.Instance.client.onAdClickEvent -= onAdClick;
        ATRewardedVideo.Instance.client.onPlayAgainStart -= onRewardedVideoAdAgainPlayStart;
        ATRewardedVideo.Instance.client.onPlayAgainFailure -= onRewardedVideoAdAgainPlayFail;
        ATRewardedVideo.Instance.client.onPlayAgainEnd -= onRewardedVideoAdAgainPlayEnd;
        ATRewardedVideo.Instance.client.onPlayAgainClick -= onRewardedVideoAdAgainPlayClicked;
        ATRewardedVideo.Instance.client.onPlayAgainReward -= onAgainReward;
        ATRewardedVideo.Instance.client.onAdSourceAttemptEvent -= startLoadingADSource;
        ATRewardedVideo.Instance.client.onAdSourceFilledEvent -= finishLoadingADSource;
        ATRewardedVideo.Instance.client.onAdSourceLoadFailureEvent -= failToLoadADSource;
        ATRewardedVideo.Instance.client.onAdSourceBiddingAttemptEvent -= startBiddingADSource;
        ATRewardedVideo.Instance.client.onAdSourceBiddingFilledEvent -= finishBiddingADSource;
        ATRewardedVideo.Instance.client.onAdSourceBiddingFailureEvent -= failBiddingADSource;

    }
	
	// Update is called once per frame
	void Update () {
		
	}

	public void gotoMainScenes(){
		Debug.Log ("Developer gotoMainScenes");
		AnyThinkAds.Demo.ATManager.printLogI ("gotoMainScenes....");
		SceneManager.LoadScene ("demoMainScenes");
	}
	public void gotoNativeScenes(){
		Debug.Log (" Developer gotoNativeScenes");
		AnyThinkAds.Demo.ATManager.printLogI ("gotoNativeScenes....");
		SceneManager.LoadScene ("nativeMainScenes");
	}


    


   
	public void loadVideo(){
        
       


      

        ATSDKAPI.setCustomDataForPlacementID(new Dictionary<string, string> { { "placement_custom_key", "placement_custom" } }, mPlacementId_rewardvideo_all);

		Dictionary<string,string> jsonmap = new Dictionary<string,string>();
		jsonmap.Add(ATConst.USERID_KEY, "test_user_id");
		jsonmap.Add(ATConst.USER_EXTRA_DATA, "test_user_extra_data");


        ATRewardedVideo.Instance.loadVideoAd(mPlacementId_rewardvideo_all,jsonmap);

        // ATRewardedVideo.Instance.addAutoLoadAdPlacementID(mPlacementId_rewardvideo_all);
		
	}
	public void showVideo(){
		
		Debug.Log ("Developer show video....");

        Dictionary<string, string> jsonmap = new Dictionary<string, string>();
        jsonmap.Add(AnyThinkAds.Api.ATConst.SCENARIO, showingScenario);
        ATRewardedVideo.Instance.showAd(mPlacementId_rewardvideo_all, jsonmap);

        // ATRewardedVideo.Instance.showAutoAd(mPlacementId_rewardvideo_all);
		
	}

	public void isReady(){


        // bool b = ATRewardedVideo.Instance.autoLoadRewardedVideoReadyForPlacementID(mPlacementId_rewardvideo_all);
		// Debug.Log("Developer Auto isReady video...." + b);

        // string adCaches = ATRewardedVideo.Instance.getAutoValidAdCaches(mPlacementId_rewardvideo_all);
        // Debug.Log("Developer getAutoValidAdCaches video...." + adCaches);

        ATRewardedVideo.Instance.entryScenarioWithPlacementID(mPlacementId_rewardvideo_all,"123");
        
		Debug.Log ("Developer isReady ?....");
        bool b = ATRewardedVideo.Instance.hasAdReady(mPlacementId_rewardvideo_all);
		Debug.Log("Developer isReady video...." + b);

        //string adStatus = ATRewardedVideo.Instance.checkAdStatus(mPlacementId_rewardvideo_all);
        //Debug.Log("Developer checkAdStatus video...." + adStatus);

        //string adCaches = ATRewardedVideo.Instance.getValidAdCaches(mPlacementId_rewardvideo_all);
        //Debug.Log("Developer getValidAdCaches video...." + adCaches);
    }

    // auto load
    public void addAutoLoadAdPlacementID()
    {
        //   if(callbackListener == null){
        //     callbackListener = new ATCallbackListener();
        //     Debug.Log("Developer init video....placementId:" + mPlacementId_rewardvideo_all);
        //     ATRewardedAutoVideo.Instance.setListener(callbackListener);
        // }
        ATRewardedAutoVideo.Instance.client.onAdLoadEvent += onAdLoad;
        ATRewardedAutoVideo.Instance.client.onAdLoadFailureEvent += onAdLoadFail;
        ATRewardedAutoVideo.Instance.client.onAdVideoStartEvent += onAdVideoStartEvent;
        ATRewardedAutoVideo.Instance.client.onAdVideoEndEvent += onAdVideoEndEvent;
        ATRewardedAutoVideo.Instance.client.onAdVideoFailureEvent += onAdVideoPlayFail;
        ATRewardedAutoVideo.Instance.client.onAdClickEvent += onAdClick;
        ATRewardedAutoVideo.Instance.client.onRewardEvent += onReward;
        ATRewardedAutoVideo.Instance.client.onAdVideoCloseEvent += onAdVideoClosedEvent;
        string[] jsonList = {mPlacementId_rewardvideo_all};
        ATRewardedAutoVideo.Instance.addAutoLoadAdPlacementID(jsonList);
    }

    public void removeAutoLoadAdPlacementID()
    {
        string[] jsonList = {mPlacementId_rewardvideo_all};

        ATRewardedAutoVideo.Instance.removeAutoLoadAdPlacementID(jsonList);
    }

    public void autoReadyForPlacementID()
    {

        ATRewardedAutoVideo.Instance.setAutoLocalExtra(mPlacementId_rewardvideo_all,new Dictionary<string, string> { { "placement_custom_key", "placement_custom" } });

        ATRewardedAutoVideo.Instance.entryAutoAdScenarioWithPlacementID(mPlacementId_rewardvideo_all, showingScenario);

        bool b = ATRewardedAutoVideo.Instance.autoLoadRewardedVideoReadyForPlacementID(mPlacementId_rewardvideo_all);
        Debug.Log("Developer isReady auto ...." + b);

        string adCaches = ATRewardedAutoVideo.Instance.checkAutoAdStatus(mPlacementId_rewardvideo_all);
        Debug.Log("Developer checkAutoAdStatus ...." + adCaches);
    }
     public void showAutoAd()
    {
        Dictionary<string, string> jsonmap = new Dictionary<string, string>();
        jsonmap.Add(AnyThinkAds.Api.ATConst.SCENARIO, showingScenario);

        // ATRewardedAutoVideo.Instance.showAutoAd(mPlacementId_rewardvideo_all);

        ATRewardedAutoVideo.Instance.showAutoAd(mPlacementId_rewardvideo_all,jsonmap);
    }

 public void onAdClick(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdClick :" +erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

    public void onAdClose(object sender,ATAdRewardEventArgs erg)
        {
            Debug.Log("Developer callback onAdClose :" + erg.placementId);
        }

    public void onAdLoad(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdLoad :" + erg.placementId);
        }

    public void onAdLoadFail(object sender,ATAdErrorEventArgs erg )
        {
            Debug.Log("Developer callback onAdLoadFail : : " +erg.placementId + "--erg.errorCode:" + erg.errorCode + "--msg:" + erg.errorMessage);
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

        public void onRewardedVideoAdAgainPlayStart(object sender,ATAdEventArgs erg){
            Debug.Log("Developer onRewardedVideoAdAgainPlayStart------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

		public void onRewardedVideoAdAgainPlayEnd(object sender,ATAdEventArgs erg){
            Debug.Log("Developer onRewardedVideoAdAgainPlayEnd------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }
		
		public void onRewardedVideoAdAgainPlayFail(object sender,ATAdErrorEventArgs erg){
            Debug.Log("Developer onRewardedVideoAdAgainPlayFail------code:" + erg.errorCode + "---message:" + erg.errorMessage);
        }

		public void onRewardedVideoAdAgainPlayClicked(object sender,ATAdEventArgs erg){
            Debug.Log("Developer onRewardedVideoAdAgainPlayClicked------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));

        }

		public void onAgainReward(object sender, ATAdEventArgs erg){
            Debug.Log("Developer onAgainReward------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));

        }

    public void onAdVideoStartEvent(object sender, ATAdEventArgs erg) {
        Debug.Log("Developer onAdVideoStartEvent------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
    } 

    public void onAdVideoEndEvent(object sender, ATAdEventArgs erg)
    {
        Debug.Log("Developer onAdVideoEndEvent------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
    }

    public void onAdVideoClosedEvent(object sender, ATAdEventArgs erg)
    {
        Debug.Log("Developer onAdVideoClosedEvent------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
    }

    public void onAdVideoPlayFail(object sender, ATAdErrorEventArgs erg)
    {
        Debug.Log("Developer onAdVideoClosedEvent------" + "->" + JsonMapper.ToJson(erg.errorMessage));
    }

    public void onReward(object sender, ATAdEventArgs erg)
    {
        Debug.Log("Developer onReward------" + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
    }



}
