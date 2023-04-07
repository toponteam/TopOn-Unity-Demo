using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using AnyThinkAds.Api;
using UnityEngine.UI;

using AnyThinkAds.ThirdParty.LitJson;

public class NativeBannerScene : MonoBehaviour {

	#if UNITY_ANDROID
	    static string mPlacementId_native_all = "b5aa1fa2cae775";

	#elif UNITY_IOS || UNITY_IPHONE
		static string mPlacementId_native_all = "b5b0f555698607";

	#endif

	// Use this for initialization
	void Start () {
		// ATNativeBannerAd.Instance.setListener(this);
		ATNativeBannerAd.Instance.client.onAdLoadEvent += onAdLoad; 
        ATNativeBannerAd.Instance.client.onAdClickEvent += onAdClick;
        ATNativeBannerAd.Instance.client.onAdCloseEvent += onAdClose;
        ATNativeBannerAd.Instance.client.onAdLoadFailureEvent += onAdLoadFail;
        ATNativeBannerAd.Instance.client.onAdSourceAttemptEvent += startLoadingADSource;
        ATNativeBannerAd.Instance.client.onAdSourceFilledEvent += finishLoadingADSource;
        ATNativeBannerAd.Instance.client.onAdLoadFailureEvent += failToLoadADSource;
        ATNativeBannerAd.Instance.client.onAdSourceBiddingAttemptEvent += startBiddingADSource;
        ATNativeBannerAd.Instance.client.onAdSourceBiddingFilledEvent += finishBiddingADSource;
        ATNativeBannerAd.Instance.client.onAdSourceBiddingFailureEvent += failBiddingADSource;
	}
    
    void OnDestroy(){
        ATNativeBannerAd.Instance.client.onAdLoadEvent -= onAdLoad; 
        ATNativeBannerAd.Instance.client.onAdClickEvent -= onAdClick;
        ATNativeBannerAd.Instance.client.onAdCloseEvent -= onAdClose;
        ATNativeBannerAd.Instance.client.onAdLoadFailureEvent -= onAdLoadFail;
        ATNativeBannerAd.Instance.client.onAdSourceAttemptEvent -= startLoadingADSource;
        ATNativeBannerAd.Instance.client.onAdSourceFilledEvent -= finishLoadingADSource;
        ATNativeBannerAd.Instance.client.onAdLoadFailureEvent -= failToLoadADSource;
        ATNativeBannerAd.Instance.client.onAdSourceBiddingAttemptEvent -= startBiddingADSource;
        ATNativeBannerAd.Instance.client.onAdSourceBiddingFilledEvent -= finishBiddingADSource;
        ATNativeBannerAd.Instance.client.onAdSourceBiddingFailureEvent -= failBiddingADSource;
    }
	
	// Update is called once per frame
	void Update () {
		
	}

	public void gotoMainScene(){
		Debug.Log ("NativeBannerScene::gotoMainScene");
		SceneManager.LoadScene("demoMainScenes");
	}

	public void loadAd() {
		Debug.Log("NativeBannerScene::loadAd");
		ATNativeBannerAd.Instance.loadAd(mPlacementId_native_all, null);
	}

	public void showAd() {
		Debug.Log("NativeBannerScene::showAd");
		Debug.Log("Screen Width : " + Screen.width + ", Screen dpi: " + Screen.dpi);
		ATRect arpuRect = new ATRect(0,100, 414,200);
        ATNativeBannerAd.Instance.showAd(mPlacementId_native_all, arpuRect, new Dictionary<string, string>{{ATNativeBannerAdShowingExtra.kATNativeBannerAdShowingExtraBackgroundColor, "#FFFFFF"}, {ATNativeBannerAdShowingExtra.kATNativeBannerAdShowingExtraTitleColor, "#FF0000"}});
	}

	public void removeAd() {
		Debug.Log("NativeBannerScene::removeAd");
		ATNativeBannerAd.Instance.removeAd(mPlacementId_native_all);
	}

	public void adReady() {
		Debug.Log("Developer NativeBannerScene::adReady:" + (ATNativeBannerAd.Instance.adReady(mPlacementId_native_all) ? "yes" : "no"));
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

	 public void onAdImpressed(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer callback onAdImpressed :" +erg.placementId + "->" + JsonMapper.ToJson(erg.callbackInfo.toDictionary()));
        }

        public void onAdVideoStart(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer onAdVideoStart------:" + erg.placementId);
        }
        public void onAdVideoEnd(object sender,ATAdEventArgs erg)
        {
            Debug.Log("Developer onAdVideoEnd------:" + erg.placementId);
        }
        public void onAdVideoProgress(object sender,ATAdProgressEventArgs erg)
        {
            Debug.Log("Developer onAdVideoProgress------:" + erg.placementId);
        }
}
