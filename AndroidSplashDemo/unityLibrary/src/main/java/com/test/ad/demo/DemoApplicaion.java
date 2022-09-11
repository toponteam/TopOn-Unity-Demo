/*
 * Copyright © 2018-2020 TopOn. All rights reserved.
 * https://www.toponad.com
 * Licensed under the TopOn SDK License Agreement
 * https://github.com/toponteam/TopOn-Android-SDK/blob/master/LICENSE
 */

package com.test.ad.demo;

import android.app.Application;
import android.os.Build;
import android.webkit.WebView;

import com.anythink.core.api.ATSDK;


public class DemoApplicaion extends Application {
    public static final String appid = "a5aa1f9deda26d";
    public static final String appKey = "4f7b9ac17decb9babec83aac078742c7";

    //Splash
    public static final String mPlacementId_splash_all = "b5bea7cc9a4497";

    @Override
    public void onCreate() {
        super.onCreate();

        //Android 9 or above must be set
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            String processName = getProcessName();
            if (!getPackageName().equals(processName)) {
                WebView.setDataDirectorySuffix(processName);
            }
        }

        ATSDK.setNetworkLogDebug(true);
        ATSDK.integrationChecking(getApplicationContext());

        ATSDK.init(this, appid, appKey);

    }

}
