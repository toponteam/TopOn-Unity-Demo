package com.anythink.unitybridge;

import android.util.Log;


public class MsgTools {
    private static final String TAG = UnityPluginUtils.TAG;
    static boolean isDebug = true;

    public static void pirntMsg(String msg) {
        if (isDebug) {
            Log.e(TAG, msg);
        }
    }

}
