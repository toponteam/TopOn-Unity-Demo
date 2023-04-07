package com.anythink.unitybridge.nativead;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.text.TextUtils;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;

import com.anythink.nativead.api.ATNativeImageView;
import com.anythink.nativead.api.ATNativeMaterial;
import com.anythink.nativead.api.ATNativePrepareExInfo;
import com.anythink.nativead.api.ATNativePrepareInfo;
import com.anythink.unitybridge.MsgTools;
import com.anythink.unitybridge.utils.CommonUtil;
import com.huawei.hms.ads.AppDownloadButton;
import com.huawei.hms.ads.AppDownloadButtonStyle;

import java.util.ArrayList;
import java.util.List;

public class SelfRenderViewUtil {

    Activity mActivity;
    ViewInfo mViewInfo;
    FrameLayout mFrameLayout;
    ImageView mDislikeView;
    int mNetworkType;

    public SelfRenderViewUtil(Activity pActivity, ViewInfo pViewInfo, int networkType) {
        mActivity = pActivity;
        mViewInfo = pViewInfo;
        mNetworkType = networkType;
    }

    public FrameLayout bindSelfRenderView(ATNativeMaterial adMaterial, ATNativePrepareInfo nativePrepareInfo, ViewInfo pViewInfo) {
        mFrameLayout = new FrameLayout(mActivity);
        FrameLayout frameLayout = new FrameLayout(mActivity);
        TextView titleView = new TextView(mActivity);
        TextView descView = new TextView(mActivity);

        //click views
        List<View> clickViewList = new ArrayList<>();
        //click
        List<View> customClickViews = new ArrayList<>();

        final View mediaView = adMaterial.getAdMediaView(frameLayout);
        if (mediaView != null) {
//            mediaView.setLayerType(View.LAYER_TYPE_SOFTWARE, null);
            MsgTools.printMsg("media view ---> " + adMaterial.getVideoUrl());
            if (pViewInfo.imgMainView != null) {
                ViewInfo.add2ParentView(frameLayout, mediaView, pViewInfo.imgMainView, -1);
            }
        } else {
            //加载大图
            MsgTools.printMsg("main image ---> " + adMaterial.getMainImageUrl());
            if (pViewInfo.imgMainView != null) {
                final ATNativeImageView mainImageView = new ATNativeImageView(mActivity);
                ViewInfo.add2ParentView(frameLayout, mainImageView, pViewInfo.imgMainView, -1);
                mainImageView.setImage(adMaterial.getMainImageUrl());
                nativePrepareInfo.setMainImageView(mainImageView);//bind main image
            }
        }

        if (pViewInfo.titleView != null) {

            if (!TextUtils.isEmpty(pViewInfo.titleView.textcolor)) {
                titleView.setTextColor(Color.parseColor(pViewInfo.titleView.textcolor));
            }

            if (pViewInfo.titleView.textSize > 0) {
                titleView.setTextSize(pViewInfo.titleView.textSize);
            }
            MsgTools.printMsg("title----> " + adMaterial.getTitle());
            titleView.setText(adMaterial.getTitle());

            titleView.setSingleLine();
            titleView.setMaxEms(15);
            titleView.setEllipsize(TextUtils.TruncateAt.END);

            ViewInfo.add2ParentView(frameLayout, titleView, pViewInfo.titleView, -1);
            nativePrepareInfo.setTitleView(titleView);//bind title
        }


        if (pViewInfo.descView != null && descView != null) {

            if (!TextUtils.isEmpty(pViewInfo.descView.textcolor)) {
                descView.setTextColor(Color.parseColor(pViewInfo.descView.textcolor));

            }
            if (pViewInfo.descView.textSize > 0) {
                descView.setTextSize(pViewInfo.descView.textSize);
            }
            MsgTools.printMsg("desc----> " + adMaterial.getDescriptionText());
            descView.setText(adMaterial.getDescriptionText());


            descView.setMaxLines(3);
            descView.setMaxEms(15);
            descView.setEllipsize(TextUtils.TruncateAt.END);

            ViewInfo.add2ParentView(frameLayout, descView, pViewInfo.descView, -1);
            nativePrepareInfo.setDescView(descView);//bind desc
        }

        ATNativeImageView iconView = null;
        if (pViewInfo.IconView != null) {

            FrameLayout iconArea = new FrameLayout(mActivity);

            View adIconView = adMaterial.getAdIconView();
            if (adIconView == null) {
                iconView = new ATNativeImageView(mActivity);
                iconArea.addView(iconView, new FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));
                iconView.setImage(adMaterial.getIconImageUrl());

                MsgTools.printMsg("ad icon url----> " + adMaterial.getIconImageUrl());
            } else {
                MsgTools.printMsg("ad icon view----> " + adIconView);
                iconArea.addView(adIconView, new FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));
            }

            // 加载图片
            ViewInfo.add2ParentView(frameLayout, iconArea, pViewInfo.IconView, -1);
            nativePrepareInfo.setIconView(iconView);//bind icon
        }


        View ctaView = null;
        if (pViewInfo.ctaView != null) {
            try {
                if (mNetworkType == 39) {// AppDownloadButton(Only Huawei Ads support)
                    ctaView = adMaterial.getAppDownloadButton();
                    if (ctaView != null) {
                        if (ctaView instanceof AppDownloadButton) {

                            AppDownloadButtonStyle appDownloadButtonStyle = new CustomAppDownloadButtonStyle(mActivity, pViewInfo);

                            if (pViewInfo.ctaView.textSize > 0) {
                                ((AppDownloadButton) ctaView).setTextSize(CommonUtil.dip2px(mActivity, pViewInfo.ctaView.textSize));

                                //This line of code test found that the font size cannot be controlled
//                                appDownloadButtonStyle.Code().setTextSize(CommonUtil.dip2px(mActivity, pViewInfo.ctaView.textSize));
                            }

                            ((AppDownloadButton) ctaView).setAppDownloadButtonStyle(appDownloadButtonStyle);

                            MsgTools.printMsg("cta----> download button");

                            FrameLayout.LayoutParams ctaLayoutParams = new FrameLayout.LayoutParams(pViewInfo.ctaView.mWidth, pViewInfo.ctaView.mHeight);
                            ctaLayoutParams.leftMargin = pViewInfo.ctaView.mX;
                            ctaLayoutParams.topMargin = pViewInfo.ctaView.mY;
                            ctaLayoutParams.gravity = Gravity.LEFT|Gravity.TOP;
                            frameLayout.addView(ctaView, ctaLayoutParams);
                        }
                    }
                }
            } catch (Throwable e) {
                ctaView = null;
                if (MsgTools.isDebug) {
                    e.printStackTrace();
                }
            }
            if (ctaView == null) {
                TextView ctaTextView = new TextView(mActivity);
                if (!TextUtils.isEmpty(pViewInfo.ctaView.textcolor)) {
                    ctaTextView.setTextColor(Color.parseColor(pViewInfo.ctaView.textcolor));
                }

                if (pViewInfo.ctaView.textSize > 0) {
                    ctaTextView.setTextSize(pViewInfo.ctaView.textSize);
                }

                ctaTextView.setGravity(Gravity.CENTER);
                ctaTextView.setSingleLine();
                ctaTextView.setMaxEms(15);
                ctaTextView.setEllipsize(TextUtils.TruncateAt.END);

                MsgTools.printMsg("cta----> " + adMaterial.getCallToActionText());
                ctaTextView.setText(adMaterial.getCallToActionText());

                ViewInfo.add2ParentView(frameLayout, ctaTextView, pViewInfo.ctaView, -1);
                nativePrepareInfo.setCtaView(ctaTextView);//bind cta button

                ctaView = ctaTextView;
            }
        }


        if (!TextUtils.isEmpty(adMaterial.getAdFrom())) {
            FrameLayout.LayoutParams adFromParam = new FrameLayout.LayoutParams(FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT);
            adFromParam.leftMargin = CommonUtil.dip2px(mActivity, 3);
            adFromParam.bottomMargin = CommonUtil.dip2px(mActivity, 3);
            adFromParam.gravity = Gravity.BOTTOM;
            TextView adFromTextView = new TextView(mActivity);
            adFromTextView.setTextSize(TypedValue.COMPLEX_UNIT_DIP, 6);
            adFromTextView.setPadding(CommonUtil.dip2px(mActivity, 5), CommonUtil.dip2px(mActivity, 2), CommonUtil.dip2px(mActivity, 5), CommonUtil.dip2px(mActivity, 2));
            adFromTextView.setBackgroundColor(0xff888888);
            adFromTextView.setTextColor(0xffffffff);
            adFromTextView.setText(adMaterial.getAdFrom());

            MsgTools.printMsg("ad from----> " + adMaterial.getAdFrom());
            frameLayout.addView(adFromTextView, adFromParam);
            nativePrepareInfo.setAdFromView(adFromTextView);//bind ad from
        }


        View logoView = null;
        if (pViewInfo.adLogoView != null) {
            View adLogoView = adMaterial.getAdLogoView();
            if (adLogoView != null) {//ad logo view
                logoView = adLogoView;

                MsgTools.printMsg("ad logo view----> " + adLogoView);
                ViewInfo.add2ParentView(frameLayout, logoView, pViewInfo.adLogoView, -1);
                nativePrepareInfo.setAdLogoView(logoView);
            } else {

                String adChoiceIconUrl = adMaterial.getAdChoiceIconUrl();
                Bitmap adLogoBitmap = adMaterial.getAdLogo();

                ATNativeImageView atNativeImageView = new ATNativeImageView(mActivity);

                if (!TextUtils.isEmpty(adChoiceIconUrl)) {//ad choice
                    MsgTools.printMsg("ad choice url----> " + adChoiceIconUrl);
                    atNativeImageView.setImage(adChoiceIconUrl);

                    logoView = atNativeImageView;

                    ViewInfo.add2ParentView(frameLayout, logoView, pViewInfo.adLogoView, -1);
                    nativePrepareInfo.setAdLogoView(logoView);
                } else if (adLogoBitmap != null) {//ad logo bitmap
                    MsgTools.printMsg("ad logo bitmap----> " + adLogoBitmap);
                    atNativeImageView.setImageBitmap(adLogoBitmap);

                    logoView = atNativeImageView;

                    ViewInfo.add2ParentView(frameLayout, logoView, pViewInfo.adLogoView, -1);
                    nativePrepareInfo.setAdLogoView(logoView);
                } else {//ad
                    MsgTools.printMsg("start to add adMaterial label textview");
                    TextView adLableTextView = new TextView(mActivity);
                    adLableTextView.setTextColor(Color.WHITE);
                    adLableTextView.setText("AD");
                    adLableTextView.setTextSize(11);
                    adLableTextView.setPadding(CommonUtil.dip2px(mActivity, 3), 0, CommonUtil.dip2px(mActivity, 3), 0);
                    adLableTextView.setBackgroundColor(Color.parseColor("#66000000"));
                    if (frameLayout != null) {
                        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
                        layoutParams.leftMargin = CommonUtil.dip2px(mActivity, 3);
                        layoutParams.topMargin = CommonUtil.dip2px(mActivity, 3);
                        frameLayout.addView(adLableTextView, layoutParams);

                        MsgTools.printMsg("add adMaterial label textview 2 activity");

                        nativePrepareInfo.setAdLogoView(adLableTextView);//bind ad choice
                    }
                }
            }
            FrameLayout.LayoutParams adLogoLayoutParams = new FrameLayout.LayoutParams(pViewInfo.adLogoView.mWidth, pViewInfo.adLogoView.mHeight);
            adLogoLayoutParams.leftMargin = pViewInfo.adLogoView.mX;
            adLogoLayoutParams.topMargin = pViewInfo.adLogoView.mY;
            nativePrepareInfo.setChoiceViewLayoutParams(adLogoLayoutParams);//bind layout params for adMaterial choice
        }


        if (pViewInfo.dislikeView != null) {
            initDislikeView(pViewInfo.dislikeView);
            MsgTools.printMsg("ad dislike----> " + mDislikeView);
            ViewInfo.add2ParentView(frameLayout, mDislikeView, pViewInfo.dislikeView, -1);
            nativePrepareInfo.setCloseView(mDislikeView);//bind close button
        }

        if (pViewInfo.rootView != null) {
            dealWithClick(frameLayout, pViewInfo.rootView.isCustomClick, clickViewList, customClickViews, "root");
        }
        if (pViewInfo.titleView != null) {
            dealWithClick(titleView, pViewInfo.titleView.isCustomClick, clickViewList, customClickViews, "title");
        }
        if (pViewInfo.descView != null) {
            dealWithClick(descView, pViewInfo.descView.isCustomClick, clickViewList, customClickViews, "desc");
        }
        if (pViewInfo.IconView != null) {
            dealWithClick(iconView, pViewInfo.IconView.isCustomClick, clickViewList, customClickViews, "icon");
        }
        if (pViewInfo.adLogoView != null) {
            dealWithClick(logoView, pViewInfo.adLogoView.isCustomClick, clickViewList, customClickViews, "adLogo");
        }
        if (pViewInfo.ctaView != null) {
            dealWithClick(ctaView, pViewInfo.ctaView.isCustomClick, clickViewList, customClickViews, "cta");
        }


        nativePrepareInfo.setClickViewList(clickViewList);//bind click view list

        if (nativePrepareInfo instanceof ATNativePrepareExInfo) {
            ((ATNativePrepareExInfo) nativePrepareInfo).setCreativeClickViewList(customClickViews);//bind custom view list
        }

        return frameLayout;
    }

    private void initDislikeView(ViewInfo.INFO dislikeInfoView) {
        if (mDislikeView == null) {
            mDislikeView = new ImageView(mActivity);
            mDislikeView.setImageResource(CommonUtil.getResId(mActivity, "btn_close", "drawable"));
        }

        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(dislikeInfoView.mWidth, dislikeInfoView.mHeight);
        layoutParams.leftMargin = dislikeInfoView.mX;
        layoutParams.topMargin = dislikeInfoView.mY;

        if (!TextUtils.isEmpty(dislikeInfoView.bgcolor)) {
            mDislikeView.setBackgroundColor(Color.parseColor(dislikeInfoView.bgcolor));
        }

        mDislikeView.setLayoutParams(layoutParams);
    }

    private void dealWithClick(View view, boolean isCustomClick, List<View> clickViews, List<View> customClickViews, String name) {
        if (view == null) {
            return;
        }

        if (mNetworkType == 8 || mNetworkType == 22) {
            if (isCustomClick) {
                MsgTools.printMsg("add customClick ----> " + name);
                customClickViews.add(view);
                return;
            }
        }
        MsgTools.printMsg("add click ----> " + name);
        clickViews.add(view);
    }

}
