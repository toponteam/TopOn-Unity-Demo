package com.anythink.unitybridge.nativead;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.text.TextUtils;

import com.huawei.hms.ads.AppDownloadButtonStyle;

public class CustomAppDownloadButtonStyle extends AppDownloadButtonStyle {

    public CustomAppDownloadButtonStyle(Context context, ViewInfo pViewInfo) {
        super(context);

        try {
            if (!TextUtils.isEmpty(pViewInfo.ctaView.textcolor)) {
                normalStyle.setTextColor(Color.parseColor(pViewInfo.ctaView.textcolor));
                processingStyle.setTextColor(Color.parseColor(pViewInfo.ctaView.textcolor));
                installingStyle.setTextColor(Color.parseColor(pViewInfo.ctaView.textcolor));
            }
            if (!TextUtils.isEmpty(pViewInfo.ctaView.bgcolor)) {
                ColorDrawable drawable = new ColorDrawable(Color.parseColor(pViewInfo.ctaView.bgcolor));
                normalStyle.setBackground(drawable);
                processingStyle.setBackground(drawable);
                installingStyle.setBackground(drawable);
            }
        } catch (Throwable e) {
            e.printStackTrace();
        }

    }
}
