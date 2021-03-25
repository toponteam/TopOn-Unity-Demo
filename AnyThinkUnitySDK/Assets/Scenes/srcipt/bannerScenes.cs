using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using AnyThinkAds.Api;
using UnityEngine.UI;

using AnyThinkAds.ThirdParty.MiniJSON;


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
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void gotoMainScenes() {
		Debug.Log ("Developer gotoMainScenes");
		AnyThinkAds.Demo.ATManager.printLogI ("Developer gotoMainScenes....");
		SceneManager.LoadScene ("demoMainScenes");
	}

    static BannerCallback bannerCallback ;

    public void loadBannerAd() {

        if(bannerCallback == null){
            bannerCallback = new BannerCallback();
            ATBannerAd.Instance.setListener(bannerCallback);
        }

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

    public void showBannerAd() {
    	Debug.Log ("Developer is banner ready....");
        string adStatus = ATBannerAd.Instance.checkAdStatus(mPlacementId_banner_all);
        Debug.Log("Developer checkAdStatus banner...." + adStatus);


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

    class BannerCallback : ATBannerAdListener
    {
        public void onAdAutoRefresh(string placementId, ATCallbackInfo callbackInfo)
        {
            Debug.Log("Developer callback onAdAutoRefresh :" +  placementId + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onAdAutoRefreshFail(string placementId, string code, string message)
        {
            Debug.Log("Developer callback onAdAutoRefreshFail : "+ placementId + "--code:" + code + "--msg:" + message);
        }

        public void onAdClick(string placementId, ATCallbackInfo callbackInfo)
        {
            Debug.Log("Developer callback onAdClick :" + placementId + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onAdClose(string placementId)
        {
            Debug.Log("Developer callback onAdClose :" + placementId);
        }

        public void onAdCloseButtonTapped(string placementId, ATCallbackInfo callbackInfo)
        {
            Debug.Log("Developer callback onAdCloseButtonTapped :" + placementId + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onAdImpress(string placementId, ATCallbackInfo callbackInfo)
        {
            Debug.Log("Developer callback onAdImpress :" + placementId + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onAdLoad(string placementId)
        {
            Debug.Log("Developer callback onAdLoad :" + placementId);
        }

        public void onAdLoadFail(string placementId, string code, string message)
        {
            Debug.Log("Developer callback onAdLoadFail : : " + placementId + "--code:" + code + "--msg:" + message);
        }
    }


}
