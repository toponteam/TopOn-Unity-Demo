package com.anythink.unitybridge.videoad;


public interface VideoListener {
    public void onRewardedVideoAdLoaded(String unitId);

    public void onRewardedVideoAdFailed(String unitId, String code, String error);

    public void onRewardedVideoAdPlayStart(String unitId, String callbackJson);

    public void onRewardedVideoAdPlayEnd(String unitId, String callbackJson);

    public void onRewardedVideoAdPlayFailed(String unitId, String code, String error);

    public void onRewardedVideoAdClosed(String unitId, boolean isRewarded, String callbackJson);

    public void onRewardedVideoAdPlayClicked(String unitId, String callbackJson);

    public void onReward(String unitId, String callbackJson);
}
