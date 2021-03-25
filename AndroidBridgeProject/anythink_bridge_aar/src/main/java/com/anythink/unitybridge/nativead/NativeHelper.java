package com.anythink.unitybridge.nativead;

import android.app.Activity;
import android.graphics.Color;
import android.text.TextUtils;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;

import com.anythink.core.api.ATAdInfo;
import com.anythink.core.api.ATAdStatusInfo;
import com.anythink.core.api.AdError;
import com.anythink.nativead.api.ATNative;
import com.anythink.nativead.api.ATNativeAdView;
import com.anythink.nativead.api.ATNativeDislikeListener;
import com.anythink.nativead.api.ATNativeEventListener;
import com.anythink.nativead.api.ATNativeNetworkListener;
import com.anythink.nativead.api.NativeAd;
import com.anythink.unitybridge.MsgTools;
import com.anythink.unitybridge.UnityPluginUtils;
import com.anythink.unitybridge.utils.CommonUtil;
import com.anythink.unitybridge.utils.Const;
import com.anythink.unitybridge.utils.TaskManager;

import org.json.JSONException;
import org.json.JSONObject;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;


@SuppressWarnings("all")
public class NativeHelper {
    public static final String TAG = UnityPluginUtils.TAG;
    NativeListener mListener;
    Activity mActivity;

    String mPlacementId;

    ATNativeAdView mATNativeAdView;
    ATNative mATNative;
    ImageView mDislikeView;

    public NativeHelper(NativeListener pListener) {
        if (pListener == null) {
            Log.e(TAG, "Listener == null");
        }
        mListener = pListener;
        mActivity = UnityPluginUtils.getActivity("NativeHelper");
        mPlacementId = "";
    }

    public void initNative(String placementId) {
        MsgTools.pirntMsg("initNative " + placementId);
        mPlacementId = placementId;
        mATNative = new ATNative(mActivity, placementId, new ATNativeNetworkListener() {
            @Override
            public void onNativeAdLoaded() {
                MsgTools.pirntMsg("onNativeAdLoaded: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (NativeHelper.this) {
                                mListener.onNativeAdLoaded(mPlacementId);
                            }
                        }
                    }
                });
            }

            @Override
            public void onNativeAdLoadFail(final AdError pAdError) {
                MsgTools.pirntMsg("onNativeAdLoadFail: " + mPlacementId + ", " + pAdError.getFullErrorInfo());
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (NativeHelper.this) {
                                mListener.onNativeAdLoadFail(mPlacementId, pAdError.getCode(), pAdError.getFullErrorInfo());
                            }
                        }
                    }
                });
            }
        });

        if (mATNativeAdView == null) {
            mATNativeAdView = new ATNativeAdView(mActivity);
        }

        MsgTools.pirntMsg("initNative 2 " + mPlacementId);
    }

    public void loadNative(final String localExtra) {
        MsgTools.pirntMsg("loadNative: " + mPlacementId + ".localExtra: " + localExtra);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mATNative == null) {
                    Log.e(TAG, "you must call initNative first");
                    TaskManager.getInstance().run_proxy(new Runnable() {
                        @Override
                        public void run() {
                            if (mListener != null) {
                                synchronized (NativeHelper.this) {
                                    mListener.onNativeAdLoadFail(mPlacementId, "-1", "you must call initNative first");
                                }
                            }
                        }
                    });
                    return;
                }

                Map<String, Object> map = new HashMap<>();
                try {
                    JSONObject _jsonObject = new JSONObject(localExtra);
                    Iterator _iterator = _jsonObject.keys();
                    String key;
                    while (_iterator.hasNext()) {
                        key = (String) _iterator.next();
                        map.put(key, _jsonObject.get(key));

                        if (TextUtils.equals(Const.Native.native_ad_size, key)) {
                            String native_ad_size = _jsonObject.optString(key);

                            if (!TextUtils.isEmpty(native_ad_size)) {
                                String[] sizes = native_ad_size.split("x");
                                map.put("key_width", sizes[0]);
                                map.put("key_height", sizes[1]);
                            }
                        }
                    }
                    mATNative.setLocalExtra(map);
                } catch (Exception e) {
                    e.printStackTrace();
                }

                mATNative.makeAdRequest();
            }
        });
    }

    NativeAd mNativeAd;
    ViewInfo pViewInfo;

    private ViewInfo parseViewInfo(String showConfig) {
        pViewInfo = new ViewInfo();

        if (TextUtils.isEmpty(showConfig)) {
            Log.e(TAG, "showConfig is null ,user defult");
            pViewInfo = ViewInfo.createDefualtView(mActivity);
        }

        try {
            JSONObject _jsonObject = new JSONObject(showConfig);

            if (_jsonObject.has("parent")) {
                String tempjson = _jsonObject.getString("parent");
                MsgTools.pirntMsg("parent----> " + tempjson);
                pViewInfo.rootView = pViewInfo.parseINFO(tempjson, "parent", 0, 0);
            }

            if (_jsonObject.has("appIcon")) {
                String tempjson = _jsonObject.getString("appIcon");
                MsgTools.pirntMsg("appIcon----> " + tempjson);
                pViewInfo.IconView = pViewInfo.parseINFO(tempjson, "appIcon", 0, 0);
            }

            if (_jsonObject.has("mainImage")) {
                String tempjson = _jsonObject.getString("mainImage");
                MsgTools.pirntMsg("mainImage----> " + tempjson);
                pViewInfo.imgMainView = pViewInfo.parseINFO(tempjson, "mainImage", 0, 0);

            }

            if (_jsonObject.has("title")) {
                String tempjson = _jsonObject.getString("title");
                MsgTools.pirntMsg("title----> " + tempjson);
                pViewInfo.titleView = pViewInfo.parseINFO(tempjson, "title", 0, 0);
            }

            if (_jsonObject.has("desc")) {
                String tempjson = _jsonObject.getString("desc");
                MsgTools.pirntMsg("desc----> " + tempjson);
                pViewInfo.descView = pViewInfo.parseINFO(tempjson, "desc", 0, 0);
            }

            if (_jsonObject.has("adLogo")) {
                String tempjson = _jsonObject.getString("adLogo");
                MsgTools.pirntMsg("adLogo----> " + tempjson);
                pViewInfo.adLogoView = pViewInfo.parseINFO(tempjson, "adLogo", 0, 0);
            }

            if (_jsonObject.has("cta")) {
                String tempjson = _jsonObject.getString("cta");
                MsgTools.pirntMsg("cta----> " + tempjson);
                pViewInfo.ctaView = pViewInfo.parseINFO(tempjson, "cta", 0, 0);
            }

            if (_jsonObject.has("dislike")) {
                String tempjson = _jsonObject.getString("dislike");
                MsgTools.pirntMsg("dislike----> " + tempjson);
                pViewInfo.dislikeView = pViewInfo.parseINFO(tempjson, "dislike", 0, 0);
            }


        } catch (JSONException pE) {
            pE.printStackTrace();
        }
        return pViewInfo;
    }

    public void show(final String showConfig, final String jsonMap) {
        MsgTools.pirntMsg("show: " + mPlacementId + ", showConfig: " + showConfig + ", jsonMap: " + jsonMap);

        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {

                String scenario = "";
                if (!TextUtils.isEmpty(jsonMap)) {
                    try {
                        JSONObject jsonObject = new JSONObject(jsonMap);
                        if (jsonObject.has(Const.SCENARIO)) {
                            scenario = jsonObject.optString(Const.SCENARIO);
                        }
                    } catch (Exception e) {
                        if (Const.DEBUG) {
                            e.printStackTrace();
                        }
                    }
                }
                NativeAd nativeAd;
                if (!TextUtils.isEmpty(scenario)) {
                    nativeAd = mATNative.getNativeAd(scenario);
                } else {
                    nativeAd = mATNative.getNativeAd();
                }

                if (nativeAd != null) {
                    MsgTools.pirntMsg("nativeAd:" + mPlacementId + ", scenario: " + scenario);
                    pViewInfo = parseViewInfo(showConfig);
                    currViewInfo.add(pViewInfo);
                    mNativeAd = nativeAd;
                    nativeAd.setNativeEventListener(new ATNativeEventListener() {
                        @Override
                        public void onAdImpressed(ATNativeAdView view, final ATAdInfo adInfo) {
                            MsgTools.pirntMsg("onAdImpressed: " + mPlacementId);
                            TaskManager.getInstance().run_proxy(new Runnable() {
                                @Override
                                public void run() {
                                    if (mListener != null) {
                                        synchronized (NativeHelper.this) {
                                            mListener.onAdImpressed(mPlacementId, adInfo.toString());
                                        }
                                    }
                                }
                            });
                        }

                        @Override
                        public void onAdClicked(ATNativeAdView view, final ATAdInfo adInfo) {
                            MsgTools.pirntMsg("onAdClicked: " + mPlacementId);
                            TaskManager.getInstance().run_proxy(new Runnable() {
                                @Override
                                public void run() {
                                    if (mListener != null) {
                                        synchronized (NativeHelper.this) {
                                            mListener.onAdClicked(mPlacementId, adInfo.toString());
                                        }
                                    }
                                }
                            });
                        }

                        @Override
                        public void onAdVideoStart(ATNativeAdView view) {
                            MsgTools.pirntMsg("onAdVideoStart: " + mPlacementId);
                            TaskManager.getInstance().run_proxy(new Runnable() {
                                @Override
                                public void run() {
                                    if (mListener != null) {
                                        synchronized (NativeHelper.this) {
                                            mListener.onAdVideoStart(mPlacementId);
                                        }
                                    }
                                }
                            });
                        }

                        @Override
                        public void onAdVideoEnd(ATNativeAdView view) {
                            MsgTools.pirntMsg("onAdVideoEnd: " + mPlacementId);
                            TaskManager.getInstance().run_proxy(new Runnable() {
                                @Override
                                public void run() {
                                    if (mListener != null) {
                                        synchronized (NativeHelper.this) {
                                            mListener.onAdVideoEnd(mPlacementId);
                                        }
                                    }
                                }
                            });

                        }

                        @Override
                        public void onAdVideoProgress(ATNativeAdView view, final int progress) {
                            MsgTools.pirntMsg("onAdVideoProgress: " + mPlacementId);
                            TaskManager.getInstance().run_proxy(new Runnable() {
                                @Override
                                public void run() {
                                    if (mListener != null) {
                                        synchronized (NativeHelper.this) {
                                            mListener.onAdVideoProgress(mPlacementId, progress);
                                        }
                                    }
                                }
                            });

                        }
                    });

                    nativeAd.setDislikeCallbackListener(new ATNativeDislikeListener() {
                        @Override
                        public void onAdCloseButtonClick(ATNativeAdView atNativeAdView, final ATAdInfo atAdInfo) {
                            MsgTools.pirntMsg("onAdCloseButtonClick: " + mPlacementId);
                            TaskManager.getInstance().run_proxy(new Runnable() {
                                @Override
                                public void run() {
                                    if (mListener != null) {
                                        synchronized (NativeHelper.this) {
                                            mListener.onAdCloseButtonClicked(mPlacementId, atAdInfo.toString());
                                        }
                                    }
                                }
                            });
                        }
                    });

                    ATUnityRender atUnityRender = new ATUnityRender(mActivity, pViewInfo);
                    try {
                        if (pViewInfo.dislikeView != null) {
                            initDislikeView(pViewInfo.dislikeView);

                            atUnityRender.setDislikeView(mDislikeView);
                        }

                        nativeAd.renderAdView(mATNativeAdView, atUnityRender);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }

                    //add dislike button
                    if (pViewInfo.dislikeView != null && mDislikeView != null) {
                        if (mDislikeView.getParent() != null) {
                            ((ViewGroup) mDislikeView.getParent()).removeView(mDislikeView);
                        }

                        mATNativeAdView.addView(mDislikeView);
                    }

                    if (pViewInfo.adLogoView != null) {
                        FrameLayout.LayoutParams adLogoLayoutParams = new FrameLayout.LayoutParams(pViewInfo.adLogoView.mWidth, pViewInfo.adLogoView.mHeight);
                        adLogoLayoutParams.leftMargin = pViewInfo.adLogoView.mX;
                        adLogoLayoutParams.topMargin = pViewInfo.adLogoView.mY;
                        nativeAd.prepare(mATNativeAdView, atUnityRender.getClickViews(), adLogoLayoutParams);
                        MsgTools.pirntMsg("prepare native ad with logo:" + mPlacementId);
                    } else {
                        nativeAd.prepare(mATNativeAdView, atUnityRender.getClickViews(), null);
                        MsgTools.pirntMsg("prepare native ad:" + mPlacementId);
                    }

                    ViewInfo.addNativeAdView2Activity(mActivity, pViewInfo, mATNativeAdView);
                } else {
                    MsgTools.pirntMsg("No Cache:" + mPlacementId);
                }
            }
        });


    }

    private void initDislikeView(ViewInfo.INFO dislikeView) {
        if (mDislikeView == null) {
            mDislikeView = new ImageView(mActivity);
            mDislikeView.setImageResource(CommonUtil.getResId(mActivity, "btn_close", "drawable"));
        }

        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(dislikeView.mWidth, dislikeView.mHeight);
        layoutParams.leftMargin = dislikeView.mX;
        layoutParams.topMargin = dislikeView.mY;

        if (!TextUtils.isEmpty(dislikeView.bgcolor)) {
            mDislikeView.setBackgroundColor(Color.parseColor(dislikeView.bgcolor));
        }

        mDislikeView.setLayoutParams(layoutParams);
    }

    public boolean isAdReady() {
        MsgTools.pirntMsg("isAdReady:" + mPlacementId);
        ATAdStatusInfo adStatusInfo = mATNative.checkAdStatus();
        boolean ready = adStatusInfo.isReady();
        MsgTools.pirntMsg("isAdReady:" + mPlacementId + ", " + ready);
        return ready;
    }

    public void clean() {
        if (mATNative != null) {
//            mATNative.destory();
        }
    }

    static List<ViewInfo> currViewInfo = new ArrayList<>();

    public void cleanView() {
        MsgTools.pirntMsg("cleanView:" + mPlacementId);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                try {

                    for (ViewInfo tempinfo : currViewInfo) {
                        if (mATNativeAdView != null) {
                            ViewGroup _viewGroup = (ViewGroup) mATNativeAdView.getParent();
                            if (_viewGroup != null) {
                                _viewGroup.removeView(mATNativeAdView);

                            }
                        }
                    }

                } catch (Exception e) {
                    if (Const.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
        });


    }

    public void onPause() {
        if (mNativeAd != null) {
            mNativeAd.onPause();
        }
    }

    public void onResume() {
        if (mNativeAd != null) {
            mNativeAd.onResume();
        }
    }

    public String checkAdStatus() {
        MsgTools.pirntMsg("checkAdStatus:" + mPlacementId);
        if (mATNative != null) {
            ATAdStatusInfo atAdStatusInfo = mATNative.checkAdStatus();
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
