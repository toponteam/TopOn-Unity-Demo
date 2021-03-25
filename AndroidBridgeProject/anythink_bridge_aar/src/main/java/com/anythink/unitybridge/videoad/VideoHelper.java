package com.anythink.unitybridge.videoad;

import android.app.Activity;
import android.text.TextUtils;

import com.anythink.core.api.ATAdInfo;
import com.anythink.core.api.ATAdStatusInfo;
import com.anythink.core.api.AdError;
import com.anythink.rewardvideo.api.ATRewardVideoAd;
import com.anythink.rewardvideo.api.ATRewardVideoListener;
import com.anythink.unitybridge.MsgTools;
import com.anythink.unitybridge.UnityPluginUtils;
import com.anythink.unitybridge.utils.Const;
import com.anythink.unitybridge.utils.TaskManager;

import org.json.JSONObject;

import java.util.HashMap;
import java.util.Map;


public class VideoHelper {
    public static final String TAG = UnityPluginUtils.TAG;
    VideoListener mListener;
    Activity mActivity;
    ATRewardVideoAd mRewardVideoAd;
    String mPlacementId;

    boolean isReady = false;
    boolean isReward = false;

    public VideoHelper(VideoListener pListener) {
        MsgTools.pirntMsg("VideoHelper: " + this);
        if (pListener == null) {
            MsgTools.pirntMsg("Listener == null: ");
        }
        mListener = pListener;
        mActivity = UnityPluginUtils.getActivity("VideoHelper");
    }

    public void initVideo(final String placementId) {
        MsgTools.pirntMsg("initVideo 1: " + placementId);

        mRewardVideoAd = new ATRewardVideoAd(mActivity, placementId);
        mPlacementId = placementId;


        MsgTools.pirntMsg("initVideo 2: " + placementId);

        mRewardVideoAd.setAdListener(new ATRewardVideoListener() {
            @Override
            public void onRewardedVideoAdLoaded() {
                MsgTools.pirntMsg("onRewardedVideoAdLoaded: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        isReady = true;
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdLoaded(mPlacementId);
                            }
                        }
                    }
                });
            }

            @Override
            public void onRewardedVideoAdFailed(final AdError pAdError) {
                MsgTools.pirntMsg("onRewardedVideoAdFailed: " + mPlacementId + ", " + pAdError.getFullErrorInfo());
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdFailed(mPlacementId, pAdError.getCode(), pAdError.getFullErrorInfo());
                            }
                        } else {
                            MsgTools.pirntMsg("onRewardedVideoAdFailed callnoback: " + pAdError.getFullErrorInfo());
                        }
                    }
                });
            }

            @Override
            public void onRewardedVideoAdPlayStart(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onRewardedVideoAdPlayStart: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdPlayStart(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onRewardedVideoAdPlayEnd(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onRewardedVideoAdPlayEnd: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdPlayEnd(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onRewardedVideoAdPlayFailed(final AdError pAdError, ATAdInfo adInfo) {
                MsgTools.pirntMsg("onRewardedVideoAdPlayFailed: " + mPlacementId + ", " + pAdError.getFullErrorInfo());
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdPlayFailed(mPlacementId, pAdError.getCode(), pAdError.getFullErrorInfo());
                            }
                        }
                    }
                });
            }


            @Override
            public void onRewardedVideoAdClosed(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onRewardedVideoAdClosed: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdClosed(mPlacementId, isReward, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onRewardedVideoAdPlayClicked(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onRewardedVideoAdPlayClicked: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onRewardedVideoAdPlayClicked(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onReward(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onReward: " + mPlacementId);
                isReward = true;
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (VideoHelper.this) {
                                mListener.onReward(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }
        });
        MsgTools.pirntMsg("initVideo 3: " + mPlacementId);
    }

    public void fillVideo(final String jsonMap) {
        MsgTools.pirntMsg("fillVideo start: " + mPlacementId + ", jsonMap: " + jsonMap);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                String userId = "";
                String userExtraData = "";

                Map<String, Object> localExtra = new HashMap<>();

                try {
                    if (!TextUtils.isEmpty(jsonMap)) {
                        JSONObject jsonObject = new JSONObject(jsonMap);

                        Const.fillMapFromJsonObject(localExtra, jsonObject);

                        if (jsonObject.has("UserId")) {
                            userId = jsonObject.optString("UserId");
                        }

                        if (jsonObject.has("UserExtraData")) {
                            userExtraData = jsonObject.optString("UserExtraData");
                        }
                    }
                } catch (Exception e) {

                }

                if (mRewardVideoAd != null) {

                    if (!TextUtils.isEmpty(userId) || !TextUtils.isEmpty(userExtraData)) {

                        localExtra.put("user_id", userId);
                        localExtra.put("user_custom_data", userExtraData);

                        MsgTools.pirntMsg("fillVideo: " + mPlacementId + ", userId:" + userId + ", userExtraData:" + userExtraData);
                    }

                    mRewardVideoAd.setLocalExtra(localExtra);
                    mRewardVideoAd.load();
                } else {
                    MsgTools.pirntMsg("fillVideo error, you must call initVideo first " + mPlacementId);
                    TaskManager.getInstance().run_proxy(new Runnable() {
                        @Override
                        public void run() {
                            if (mListener != null) {
                                synchronized (VideoHelper.this) {
                                    mListener.onRewardedVideoAdFailed(mPlacementId, "-1", "you must call initVideo first");
                                }
                            }
                        }
                    });
                }

            }
        });
    }


    public void showVideo(final String jsonMap) {
        MsgTools.pirntMsg("showVideo: " + mPlacementId + ", jsonMap: " + jsonMap);
        isReward = false;
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mRewardVideoAd != null) {
                    isReady = false;

                    String scenario = "";
                    if (!TextUtils.isEmpty(jsonMap)) {
                        try {
                            JSONObject _jsonObject = new JSONObject(jsonMap);
                            if (_jsonObject.has(Const.SCENARIO)) {
                                scenario = _jsonObject.optString(Const.SCENARIO);
                            }
                        } catch (Exception e) {
                            if (Const.DEBUG) {
                                e.printStackTrace();
                            }
                        }
                    }
                    MsgTools.pirntMsg("showVideo: " + mPlacementId + ", scenario: " + scenario);
                    if (!TextUtils.isEmpty(scenario)) {
                        mRewardVideoAd.show(mActivity, scenario);
                    } else {
                        mRewardVideoAd.show(mActivity);
                    }
                } else {
                    MsgTools.pirntMsg("showVideo error, you must call initVideo first " + mPlacementId);
                    TaskManager.getInstance().run_proxy(new Runnable() {
                        @Override
                        public void run() {
                            if (mListener != null) {
                                synchronized (VideoHelper.this) {
                                    mListener.onRewardedVideoAdFailed(mPlacementId, "-1", "you must call initVideo first");
                                }
                            }
                        }
                    });
                }
            }
        });

    }

    public boolean isAdReady() {
        MsgTools.pirntMsg("isAdReady start: " + mPlacementId);

        try {
            if (mRewardVideoAd != null) {
                boolean isAdReady = mRewardVideoAd.isAdReady();
                MsgTools.pirntMsg("isAdReady: " + mPlacementId + isAdReady);
                return isAdReady;
            } else {
                MsgTools.pirntMsg("isAdReady error, you must call initVideo first ");

            }
            MsgTools.pirntMsg("isAdReady end: " + mPlacementId);
        } catch (Exception e) {
            MsgTools.pirntMsg("isAdReady Exception: " + e.getMessage());
            return isReady;

        } catch (Throwable e) {
            MsgTools.pirntMsg("isAdReady Throwable:" + e.getMessage());
            return isReady;
        }
        return isReady;
    }


    public String checkAdStatus() {
        MsgTools.pirntMsg("checkAdStatus: " + mPlacementId);
        if (mRewardVideoAd != null) {
            ATAdStatusInfo atAdStatusInfo = mRewardVideoAd.checkAdStatus();
            boolean loading = atAdStatusInfo.isLoading();
            boolean ready = atAdStatusInfo.isReady();
            ATAdInfo atTopAdInfo = atAdStatusInfo.getATTopAdInfo();

            try {
                JSONObject jsonObject = new JSONObject();
                jsonObject.put("isLoading", loading);
                jsonObject.put("isReady", ready);
                jsonObject.put("adInfo", atTopAdInfo);

                return jsonObject.toString();
            } catch (Throwable e) {
                e.printStackTrace();
            }
        }
        return "";
    }

}
