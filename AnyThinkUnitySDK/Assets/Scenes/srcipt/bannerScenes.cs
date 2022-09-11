using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using AnyThinkAds.Api;
using UnityEngine.UI;

using AnyThinkAds.ThirdParty.LitJson;



public class bannerScenes : MonoBehaviour {




#if UNITY_ANDROID
    static string mPlacementId_banner_all = "b5baca4f74c3d8";
    static string showingScenario = "f600e6039e152c";

#elif UNITY_IOS || UNITY_IPHONE
	static string mPlacementId_banner_all = "b5bacaccb61c29";
    //static string mPlacementId_banner_all = "b5bacaccb61c29";
    static string showingScenario = "";
#endif

    private int screenWidth;
    // Use this for initialization
    void Start () {
        this.screenWidth = Screen.width;

        ATBannerAd.Instance.client.onAdAutoRefreshEvent += onAdAutoRefresh;
        ATBannerAd.Instance.client.onAdAutoRefreshFailureEvent += onAdAutoRefreshFail;
        ATBannerAd.Instance.client.onAdClickEvent += onAdClick;
        ATBannerAd.Instance.client.onAdCloseEvent += onAdClose;
        ATBannerAd.Instance.client.onAdCloseButtonTappedEvent += onAdCloseButtonTapped;
        ATBannerAd.Instance.client.onAdImpressEvent += onAdImpress;
        ATBannerAd.Instance.client.onAdLoadEvent += onAdLoad;
        ATBannerAd.Instance.client.onAdLoadFailureEvent += onAdLoadFail;
        ATBannerAd.Instance.client.onAdSourceAttemptEvent += startLoadingADSource;
        ATBannerAd.Instance.client.onAdSourceFilledEvent += finishLoadingADSource;
        ATBannerAd.Instance.client.onAdSourceLoadFailureEvent += failToLoadADSource;
        ATBannerAd.Instance.client.onAdSourceBiddingAttemptEvent += startBiddingADSource;
        ATBannerAd.Instance.client.onAdSourceBiddingFilledEvent += finishBiddingADSource;
        ATBannerAd.Instance.client.onAdSourceBiddingFailureEvent += failBiddingADSource;

	}
	
    
    void OnDestroy(){

        ATBannerAd.Instance.client.onAdAutoRefreshEvent -= onAdAutoRefresh;
        ATBannerAd.Instance.client.onAdAutoRefreshFailureEvent -= onAdAutoRefreshFail;
        ATBannerAd.Instance.client.onAdClickEvent -= onAdClick;
        ATBannerAd.Instance.client.onAdCloseEvent -= onAdClose;
        ATBannerAd.Instance.client.onAdCloseButtonTappedEvent -= onAdCloseButtonTapped;
        ATBannerAd.Instance.client.onAdImpressEvent -= onAdImpress;
        ATBannerAd.Instance.client.onAdLoadEvent -= onAdLoad;
        ATBannerAd.Instance.client.onAdLoadFailureEvent -= onAdLoadFail;
        ATBannerAd.Instance.client.onAdSourceAttemptEvent -= startLoadingADSource;
        ATBannerAd.Instance.client.onAdSourceFilledEvent -= finishLoadingADSource;
        ATBannerAd.Instance.client.onAdSourceLoadFailureEvent -= failToLoadADSource;
        ATBannerAd.Instance.client.onAdSourceBiddingAttemptEvent -= startBiddingADSource;
        ATBannerAd.Instance.client.onAdSourceBiddingFilledEvent -= finishBiddingADSource;
        ATBannerAd.Instance.client.onAdSourceBiddingFailureEvent -= failBiddingADSource;
    }
	// Update is called once per frame
	void Update () {
		
	}

	public void gotoMainScenes() {
		Debug.Log ("Developer gotoMainScenes");
		AnyThinkAds.Demo.ATManager.printLogI ("Developer gotoMainScenes....");
		SceneManager.LoadScene ("demoMainScenes");
	}

    // static BannerCallback bannerCallback ;

    public void loadBannerAd() {

        // if(bannerCallback == null){
        //     bannerCallback = new BannerCallback();
        //     ATBannerAd.Instance.setListener(bannerCallback);
        // }

        Dictionary<string, object> jsonmap = new Dictionary<string,object>();


        #if UNITY_ANDROID
            ATSize bannerSize = new ATSize(960, 150, true);
            jsonmap.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSizeStruct, bannerSize);
            jsonmap.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraAdaptiveWidth, bannerSize.width);
            jsonmap.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraAdaptiveOrientation, ATBannerAdLoadingExtra.kATBannerAdLoadingExtraAdaptiveOrientationPortrait);
        #elif UNITY_IOS || UNITY_IPHONE
            ATSize bannerSize = new ATSize(320, 50, false);
            jsonmap.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSizeStruct, bannerSize);
            jsonmap.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraAdaptiveWidth, bannerSize.width);
            jsonmap.Add(ATBannerAdLoadingExtra.kATBannerAdLoadingExtraAdaptiveOrientation, ATBannerAdLoadingExtra.kATBannerAdLoadingExtraAdaptiveOrientationPortrait);
        
        #endif
        ATBannerAd.Instance.loadBannerAd(mPlacementId_banner_all, jsonmap);
    

        

    }
    
   

    public void onAdAutoRefresh(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdAutoRefresh :" + erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

    public void onAdAutoRefreshFail(object sender,ATAdErrorEventArgs erg )
        {
            Debug.Log("Developer callback onAdAutoRefreshFail : "+ erg.placementId + "--erg.errorCode:" + erg.errorCode + "--msg:" + erg.errorMessage);
        }

    public void onAdClick(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdClick :" +erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

    public void onAdClose(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdClose :" + erg.placementId);
        }

    public void onAdCloseButtonTapped(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdCloseButtonTapped :" + erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

    public void onAdImpress(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdImpress :" + erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

    public void onAdLoad(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdLoad :" + erg.placementId);
        }

    public void onAdLoadFail(object sender, ATAdErrorEventArgs erg )
        {
            Debug.Log("Developer callback onAdLoadFail : : " + erg.placementId + "--erg.errorCode:" + erg.errorCode + "--msg:" + erg.errorMessage);
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
        
    public void showBannerAd() {
    	Debug.Log ("Developer is banner ready....");
        string adStatus = ATBannerAd.Instance.checkAdStatus(mPlacementId_banner_all);
        Debug.Log("Developer checkAdStatus banner...." + adStatus);

        string adCaches = ATBannerAd.Instance.getValidAdCaches(mPlacementId_banner_all);
        Debug.Log("Developer getValidAdCaches banner...." + adCaches);



            
        // ATRect arpuRect = new ATRect(0,50, this.screenWidth, 300, true);
        // ATBannerAd.Instance.showBannerAd(mPlacementId_banner_all, arpuRect);
        // ATBannerAd.Instance.showBannerAd(mPlacementId_banner_all, ATBannerAdLoadingExtra.kATBannerAdShowingPisitionBottom);
        ATBannerAd.Instance.showBannerAd(mPlacementId_banner_all, ATBannerAdLoadingExtra.kATBannerAdShowingPisitionTop);


        //show with scenario
//        Dictionary<string, string> jsonmap = new Dictionary<string, string>();
//        jsonmap.Add(AnyThinkAds.Api.ATConst.SCENARIO, showingScenario);
//        //ATBannerAd.Instance.showBannerAd(mPlacementId_banner_all, arpuRect, jsonmap);
//        ATBannerAd.Instance.showBannerAd(mPlacementId_banner_all, ATBannerAdLoadingExtra.kATBannerAdShowingPisitionTop, jsonmap);

    }

    public void removeBannerAd() {
        ATBannerAd.Instance.cleanBannerAd(mPlacementId_banner_all);
    }

    public void hideBannerAd() {
        ATBannerAd.Instance.hideBannerAd(mPlacementId_banner_all);
    }

    /*
     * Use this method when you want to reshow a banner that is previously hidden(by calling hideBannerAd)   
    */
    public void reshowBannerAd() {
        ATBannerAd.Instance.showBannerAd(mPlacementId_banner_all);
    }



}
