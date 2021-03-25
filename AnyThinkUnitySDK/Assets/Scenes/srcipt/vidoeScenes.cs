using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using AnyThinkAds.Api;
using UnityEngine.UI;
using AnyThinkAds.ThirdParty.MiniJSON;

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



    static ATCallbackListener callbackListener;
	public void loadVideo(){
        if(callbackListener == null){
            callbackListener = new ATCallbackListener();
            Debug.Log("Developer init video....placementId:" + mPlacementId_rewardvideo_all);
            ATRewardedVideo.Instance.setListener(callbackListener);
        }

        ATSDKAPI.setCustomDataForPlacementID(new Dictionary<string, string> { { "placement_custom_key", "placement_custom" } }, mPlacementId_rewardvideo_all);

		Dictionary<string,string> jsonmap = new Dictionary<string,string>();
		jsonmap.Add(ATConst.USERID_KEY, "test_user_id");
		jsonmap.Add(ATConst.USER_EXTRA_DATA, "test_user_extra_data");


        ATRewardedVideo.Instance.loadVideoAd(mPlacementId_rewardvideo_all,jsonmap);
		
	}
	public void showVideo(){
		
		Debug.Log ("Developer show video....");

        Dictionary<string, string> jsonmap = new Dictionary<string, string>();
        jsonmap.Add(AnyThinkAds.Api.ATConst.SCENARIO, showingScenario);
        ATRewardedVideo.Instance.showAd(mPlacementId_rewardvideo_all, jsonmap);
		
	}

	public void isReady(){

		// Debug.Log ("Developer isReady ?....");
        bool b = ATRewardedVideo.Instance.hasAdReady(mPlacementId_rewardvideo_all);
		Debug.Log("Developer isReady video...." + b);

        string adStatus = ATRewardedVideo.Instance.checkAdStatus(mPlacementId_rewardvideo_all);
        Debug.Log("Developer checkAdStatus video...." + adStatus);
    }

    class ATCallbackListener : ATRewardedVideoListener {
        
        public void onRewardedVideoAdLoaded(string placementId)
        {
            Debug.Log("Developer onRewardedVideoAdLoaded------");
        }

        public void onRewardedVideoAdLoadFail(string placementId, string code, string message){
            Debug.Log("Developer onRewardedVideoAdLoadFail------:code" + code + "--message:" + message);
        }

        public void onRewardedVideoAdPlayStart(string placementId, ATCallbackInfo callbackInfo){
            Debug.Log("Developer onRewardedVideoAdPlayStart------" + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onRewardedVideoAdPlayEnd(string placementId, ATCallbackInfo callbackInfo){
            Debug.Log("Developer onRewardedVideoAdPlayEnd------" + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onRewardedVideoAdPlayFail(string placementId, string code, string message){
            Debug.Log("Developer onRewardedVideoAdPlayFail------code:" + code + "---message:" + message);
        }

        public void onRewardedVideoAdPlayClosed(string placementId, bool isReward, ATCallbackInfo callbackInfo){
            Debug.Log("Developer onRewardedVideoAdPlayClosed------isReward:" + isReward + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onRewardedVideoAdPlayClicked(string placementId, ATCallbackInfo callbackInfo){
            Debug.Log("Developer onRewardVideoAdPlayClicked------" + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }

        public void onReward(string placementId, ATCallbackInfo callbackInfo){
            Debug.Log("Developer onReward------" + "->" + Json.Serialize(callbackInfo.toDictionary()));
        }
    }
}
