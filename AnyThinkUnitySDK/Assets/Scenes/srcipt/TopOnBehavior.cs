using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TopOnBehavior : MonoBehaviour
{
#if UNITY_ANDROID && !UNITY_EDITOR
    // AdMob Banner testplacement ID
    // string PLACEMENT_BANNER_AD_ID = "b627391499c5fc";
    // Test id for TopOn Android
    string PLACEMENT_BANNER_AD_ID = "b5baca41a2536f";
    string APP_ID = "a5aa1f9deda26d";
    string APP_KEY = "4f7b9ac17decb9babec83aac078742c7";
#elif UNITY_IPHONE && !UNITY_EDITOR
    // AdMob Banner testplacement ID
    // string PLACEMENT_BANNER_AD_ID = "b5bacacef17717";
    // Test i for TopOn iOS
    string PLACEMENT_BANNER_AD_ID = "b5bacacef17717";
    string APP_ID = "a5b0e8491845b3";
    string APP_KEY = "7eae0567827cfe2b22874061763f30c9";
#else
    // AdMob Banner testplacement ID
    // string PLACEMENT_BANNER_AD_ID = "b627391499c5fc";
    // Test id for TopOn Android
    string PLACEMENT_BANNER_AD_ID = "b5baca41a2536f";
    string APP_ID = "a5aa1f9deda26d";
    string APP_KEY = "4f7b9ac17decb9babec83aac078742c7";
#endif
    string APP_CHANNEL = "testChannel";
    string APP_SUB_CHANNEL = "testSubChannel";
    // Start is called before the first frame update
    void Start()
    {
        InitializeTopOn();
    }

    private void InitializeTopOn()
    {
        Debug.Log("initializing");
        // var t = Tenjin.getInstance("YWZKFWDZEREQCFMF3DST3AYHZPCC9MWV");
        // t.Connect();
        // t.SubscribeTopOnImpressions();
#if tenjin_topon_enabled
        AnyThinkAds.Api.ATSDKAPI.setChannel(APP_CHANNEL);
        AnyThinkAds.Api.ATSDKAPI.setSubChannel(APP_SUB_CHANNEL); 
        // ATSDKAPI.setLogDebug(true);
        AnyThinkAds.Api.ATSDKAPI.initSDK(APP_ID, APP_KEY);
        // Load Banner
        Dictionary<string, object> jsonmap = new Dictionary<string,object>();
#if UNITY_ANDROID && !UNITY_EDITOR
        AnyThinkAds.Api.ATSize bannerSize = new AnyThinkAds.Api.ATSize(320, 50, true);
#elif UNITY_IPHONE && !UNITY_EDITOR
        AnyThinkAds.Api.ATSize bannerSize = new AnyThinkAds.Api.ATSize(320, 50, false);
#else
        AnyThinkAds.Api.ATSize bannerSize = new AnyThinkAds.Api.ATSize(320, 50, false);
#endif
        jsonmap.Add(AnyThinkAds.Api.ATBannerAdLoadingExtra.kATBannerAdLoadingExtraBannerAdSizeStruct, bannerSize);
        jsonmap.Add(AnyThinkAds.Api.ATBannerAdLoadingExtra.kATBannerAdLoadingExtraInlineAdaptiveWidth, bannerSize.width);
        jsonmap.Add(AnyThinkAds.Api.ATBannerAdLoadingExtra.kATBannerAdLoadingExtraInlineAdaptiveOrientation, AnyThinkAds.Api.ATBannerAdLoadingExtra.kATBannerAdLoadingExtraInlineAdaptiveOrientationCurrent);
        AnyThinkAds.Api.ATBannerAd.Instance.loadBannerAd(PLACEMENT_BANNER_AD_ID, jsonmap);
        // Show Banner
        AnyThinkAds.Api.ATBannerAd.Instance.showBannerAd(PLACEMENT_BANNER_AD_ID, AnyThinkAds.Api.ATBannerAdLoadingExtra.kATBannerAdShowingPisitionBottom);
        //Ad Impression Data Event
        AnyThinkAds.Api.ATInterstitialAd.Instance.client.onAdShowEvent += (sender, args) => 
        {
            Debug.Log($"!!! Unity got ATInterstitialAd impression data - {args}");
        };
        AnyThinkAds.Api.ATBannerAd.Instance.client.onAdImpressEvent += (sender, args) => 
        {
            Debug.Log($"!!! Unity got ATBannerAd impression data - {args}");
            Debug.Log($"ATInterstitialAd impression data - {args.callbackInfo.getOriginJSONString()}");
        };
        AnyThinkAds.Api.ATRewardedVideo.Instance.client.onAdVideoStartEvent += (sender, args) => 
        {
            Debug.Log($"!!! Unity got ATRewardedVideo impression data - {args}");
        };
        // TODO: Will support ATNativeAd in future if the TopOn team removes setListener method from ATNativeAd
        AnyThinkAds.Api.ATNativeAd.Instance.client.onAdImpressEvent += (sender, args) => 
        {
            Debug.Log($"!!! Unity got ATNativeAd impression data - {args}");
        };
#endif
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void GoBack()
    {
#if tenjin_topon_enabled
        AnyThinkAds.Api.ATBannerAd.Instance.cleanBannerAd(PLACEMENT_BANNER_AD_ID);
#endif
        SceneManager.LoadScene("Tenjin");
    }
}
