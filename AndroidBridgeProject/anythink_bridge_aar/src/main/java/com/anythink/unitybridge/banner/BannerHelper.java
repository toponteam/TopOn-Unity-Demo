package com.anythink.unitybridge.banner;

import android.app.Activity;
import android.text.TextUtils;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;

import com.anythink.banner.api.ATBannerListener;
import com.anythink.banner.api.ATBannerView;
import com.anythink.core.api.ATAdInfo;
import com.anythink.core.api.ATAdStatusInfo;
import com.anythink.core.api.AdError;
import com.anythink.unitybridge.MsgTools;
import com.anythink.unitybridge.UnityPluginUtils;
import com.anythink.unitybridge.utils.Const;
import com.anythink.unitybridge.utils.TaskManager;

import org.json.JSONException;
import org.json.JSONObject;

import java.util.HashMap;
import java.util.Map;

public class BannerHelper {

    private static final String kATBannerAdShowingPisitionTop = "top";
    private static final String kATBannerAdShowingPisitionBottom = "bottom";

    private final String TAG = getClass().getSimpleName();
    BannerListener mListener;
    Activity mActivity;
    String mPlacementId;

    ATBannerView mBannerView;

    public BannerHelper(BannerListener listener) {
        MsgTools.pirntMsg("BannerHelper: " + this);
        if (listener == null) {
            MsgTools.pirntMsg("Listener == null");
        }
        mListener = listener;
        mActivity = UnityPluginUtils.getActivity("BannerHelper");
        mPlacementId = "";
    }

    public void initBanner(String placementId) {
        MsgTools.pirntMsg("initBanner 1: " + placementId);
        mPlacementId = placementId;

        mBannerView = new ATBannerView(mActivity);
        mBannerView.setPlacementId(mPlacementId);
        MsgTools.pirntMsg("initBanner 2: " + mPlacementId);
        mBannerView.setBannerAdListener(new ATBannerListener() {
            @Override
            public void onBannerLoaded() {
                MsgTools.pirntMsg("onBannerLoaded: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerLoaded(mPlacementId);
                            }
                        }
                    }
                });

            }

            @Override
            public void onBannerFailed(final AdError adError) {
                MsgTools.pirntMsg("onBannerFailed: " + mPlacementId + ", " + adError.getFullErrorInfo());
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerFailed(mPlacementId, adError.getCode(), adError.getFullErrorInfo());
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerClicked(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onBannerClicked: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerClicked(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerShow(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onBannerShow: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerShow(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerClose(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onBannerClose: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerClose(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerAutoRefreshed(final ATAdInfo adInfo) {
                MsgTools.pirntMsg("onBannerAutoRefreshed: " + mPlacementId);
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerAutoRefreshed(mPlacementId, adInfo.toString());
                            }
                        }
                    }
                });
            }

            @Override
            public void onBannerAutoRefreshFail(final AdError adError) {
                MsgTools.pirntMsg("onBannerAutoRefreshFail: " + mPlacementId + ", " + adError.getFullErrorInfo());
                TaskManager.getInstance().run_proxy(new Runnable() {
                    @Override
                    public void run() {
                        if (mListener != null) {
                            synchronized (BannerHelper.this) {
                                mListener.onBannerAutoRefreshFail(mPlacementId, adError.getCode(), adError.getFullErrorInfo());
                            }
                        }
                    }
                });
            }
        });
        MsgTools.pirntMsg("initBanner 3: " + mPlacementId);
    }

    public void loadBannerAd(final String jsonMap) {
        MsgTools.pirntMsg("loadBanner: " + mPlacementId + ", jsonMap: " + jsonMap);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null) {
                    if (!TextUtils.isEmpty(jsonMap)) {//针对 穿山甲第一次banner尺寸不对
                        try {
                            JSONObject jsonObject = new JSONObject(jsonMap);
                            if (jsonObject.has("banner_ad_size")) {
                                String banner_ad_size = jsonObject.getString("banner_ad_size");
                                MsgTools.pirntMsg("banner_ad_size----> " + banner_ad_size);

                                if (mBannerView != null && !TextUtils.isEmpty(banner_ad_size)) {
                                    String[] size = banner_ad_size.split("x");
                                    MsgTools.pirntMsg("loadBannerAd, banner_ad_size" + banner_ad_size);
                                    if (mBannerView.getLayoutParams() == null) {
                                        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(Integer.parseInt(size[0]), Integer.parseInt(size[1]));
                                        mBannerView.setLayoutParams(lp);
                                    } else {
                                        mBannerView.getLayoutParams().width = Integer.parseInt(size[0]);
                                        mBannerView.getLayoutParams().height = Integer.parseInt(size[1]);
                                    }

                                }
                            }

                            if (jsonObject.has("inline_adaptive_width")) {
                                String adaptive_width = jsonObject.getString("inline_adaptive_width");
                                MsgTools.pirntMsg("inline_adaptive_width----> " + adaptive_width);
                                jsonObject.put("adaptive_width", adaptive_width);
                            }
                            if (jsonObject.has("inline_adaptive_orientation")) {
                                int adaptive_orientation = jsonObject.getInt("inline_adaptive_orientation");
                                MsgTools.pirntMsg("inline_adaptive_orientation----> " + adaptive_orientation);
                                jsonObject.put("adaptive_orientation", adaptive_orientation);
                            }

                            if (!jsonObject.has("adaptive_type")) {
                                jsonObject.put("adaptive_type", 0);
                            }

                            Map<String, Object> localExtra = new HashMap<>();
                            Const.fillMapFromJsonObject(localExtra, jsonObject);

                            mBannerView.setLocalExtra(localExtra);

                        } catch (JSONException e) {
                            e.printStackTrace();
                        }
                    }

                    mBannerView.loadAd();
                } else {
                    MsgTools.pirntMsg("loadBannerAd error, you must call initBanner first " + mPlacementId);
                    TaskManager.getInstance().run_proxy(new Runnable() {
                        @Override
                        public void run() {
                            if (mListener != null) {
                                synchronized (BannerHelper.this) {
                                    mListener.onBannerFailed(mPlacementId, "-1", "you must call initBanner first");
                                }
                            }
                        }
                    });
                }

            }
        });
    }

    public void loadBannerAd() {
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null) {
                    mBannerView.loadAd();
                } else {
                    MsgTools.pirntMsg("loadBannerAd error, you must call initBanner first " + mPlacementId);
                    TaskManager.getInstance().run_proxy(new Runnable() {
                        @Override
                        public void run() {
                            if (mListener != null) {
                                synchronized (BannerHelper.this) {
                                    mListener.onBannerFailed(mPlacementId, "-1", "you must call initBanner first");
                                }
                            }
                        }
                    });
                }

            }
        });
    }

    public void showBannerAd(final int x, final int y, final int width, final int height, final String jsonMap) {
        MsgTools.pirntMsg("showBanner: " + mPlacementId + ", jsonMap: " + jsonMap);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null) {
                    FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(width, height);
                    layoutParams.leftMargin = x;
                    layoutParams.topMargin = y;
                    if (mBannerView.getParent() != null) {
                        ((ViewGroup) mBannerView.getParent()).removeView(mBannerView);
                    }

                    setConfig(jsonMap);

                    mActivity.addContentView(mBannerView, layoutParams);
                } else {
                    MsgTools.pirntMsg("show error, you must call initBanner first " + mPlacementId);
                }

            }
        });
    }


    public void showBannerAd(final String position, final String jsonMap) {
        MsgTools.pirntMsg("showBanner by position: " + mPlacementId + ", jsonMap: " + jsonMap);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null) {
                    int width = 0;
                    int height = 0;
                    if (mBannerView.getLayoutParams() != null) {
                        width = mBannerView.getLayoutParams().width;
                        height = mBannerView.getLayoutParams().height;
                    }
                    FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(width, height);
                    if (kATBannerAdShowingPisitionTop.equals(position)) {
                        layoutParams.gravity = Gravity.CENTER_HORIZONTAL | Gravity.TOP;
                    } else {
                        layoutParams.gravity = Gravity.CENTER_HORIZONTAL | Gravity.BOTTOM;
                    }
                    if (mBannerView.getParent() != null) {
                        ((ViewGroup) mBannerView.getParent()).removeView(mBannerView);
                    }

                    setConfig(jsonMap);

                    mActivity.addContentView(mBannerView, layoutParams);
                } else {
                    MsgTools.pirntMsg("show error, you must call initBanner first " + mPlacementId);
                }

            }
        });
    }

    private void setConfig(String jsonMap) {
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

        MsgTools.pirntMsg("showBanner: " + mPlacementId + ", scenario: " + scenario);
        if (!TextUtils.isEmpty(scenario)) {
            mBannerView.setScenario(scenario);
        }
    }


    public void showBannerAd() {
        MsgTools.pirntMsg("showBanner without ATRect: " + mPlacementId);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null) {
                    mBannerView.setVisibility(View.VISIBLE);
                } else {
                    MsgTools.pirntMsg("show error, you must call initBanner first " + mPlacementId);
                }

            }
        });
    }

    public void hideBannerAd() {
        MsgTools.pirntMsg("hideBannerAd: " + mPlacementId);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null) {
                    mBannerView.setVisibility(View.GONE);
                } else {
                    MsgTools.pirntMsg("hideBannerAd error, you must call initBanner first " + mPlacementId);
                }

            }
        });
    }

    public void cleanBannerAd() {
        MsgTools.pirntMsg("clean: " + mPlacementId);
        UnityPluginUtils.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if (mBannerView != null && mBannerView.getParent() != null) {
                    MsgTools.pirntMsg("clean2: " + mPlacementId);
                    ViewParent viewParent = mBannerView.getParent();
                    ((ViewGroup) viewParent).removeView(mBannerView);
                } else {
                    MsgTools.pirntMsg("clean3: no banner clean " + mPlacementId);
                }
            }
        });
    }

    public String checkAdStatus() {
        MsgTools.pirntMsg("checkAdStatus: " + mPlacementId);
        if (mBannerView != null) {
            ATAdStatusInfo atAdStatusInfo = mBannerView.checkAdStatus();
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
