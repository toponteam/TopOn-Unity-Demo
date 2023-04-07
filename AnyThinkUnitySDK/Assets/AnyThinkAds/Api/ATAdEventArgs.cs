        
using System;
using System.Collections;
using AnyThinkAds.Api;

namespace AnyThinkAds.Api
{
    
    public class ATAdEventArgs
    {
        public String placementId { get; }
        public ATCallbackInfo callbackInfo { get; }

        public ATAdEventArgs(String id)
        {
            placementId = id;
            callbackInfo = new ATCallbackInfo("");
        }

        public ATAdEventArgs(String id, String callbackJson)
        {
            placementId = id;
            callbackInfo = new ATCallbackInfo(callbackJson);
        }
    }

    public class ATAdErrorEventArgs : ATAdEventArgs
    {
        public String errorMessage { get; }
        public String errorCode { get; }

        public ATAdErrorEventArgs(String placementId, String code, String message)
            : base(placementId)
        {
            errorMessage = message;
            errorCode = code;
        }

        public ATAdErrorEventArgs(String placementId, String callbackJson, String code, String message)
            : base(placementId, callbackJson)
        {
            errorMessage = message;
            errorCode = code;
        }
    }

    public class ATAdProgressEventArgs : ATAdEventArgs
    {
        public int adProgress { get; }

        public ATAdProgressEventArgs(String placementId, String callbackJson, int progress)
            : base(placementId, callbackJson)
        {
            adProgress = progress;
        }
    }

    public class ATAdRewardEventArgs : ATAdEventArgs
    {
        public bool isRewarded { get; }

        public ATAdRewardEventArgs(String placementId, String callbackJson, bool doReward)
            : base(placementId, callbackJson)
        {
            isRewarded = doReward;
        }
    }


    public interface IHCommonEvents
    {
        // triggers when the ad has been succesfully loaded
        event EventHandler<ATAdEventArgs> onAdLoadEvent;

        // triggers when the ad has failed to load
        event EventHandler<ATAdErrorEventArgs> onAdLoadFailureEvent;

        // triggers when a the ad has started to load
        event EventHandler<ATAdEventArgs> onAdSourceAttemptEvent;

        // triggers when a the ad has finished to load
        event EventHandler<ATAdEventArgs> onAdSourceFilledEvent;

        // triggers when a the ad has started to load
        event EventHandler<ATAdErrorEventArgs> onAdSourceLoadFailureEvent;

        // triggers when a the ad has started to load
        event EventHandler<ATAdEventArgs> onAdSourceBiddingAttemptEvent;

        // triggers when a the ad has started to load
        event EventHandler<ATAdEventArgs> onAdSourceBiddingFilledEvent;

        // triggers when a the ad has started to load
        event EventHandler<ATAdErrorEventArgs> onAdSourceBiddingFailureEvent;
    }


    public interface IATBannerEvents: IHCommonEvents
    {
        // triggers when a banner ad generates an impression
        event EventHandler<ATAdEventArgs> onAdImpressEvent;

        // triggers when the user clicks a banner ad
        event EventHandler<ATAdEventArgs> onAdClickEvent;

        // triggers when the ad refreshes
        event EventHandler<ATAdEventArgs> onAdAutoRefreshEvent;

        // triggers when the ad fails to auto refresh
        event EventHandler<ATAdErrorEventArgs> onAdAutoRefreshFailureEvent;

        // triggers when the banner ad is closed
        event EventHandler<ATAdEventArgs> onAdCloseEvent;

        // triggers when the users closes the ad via the button
        event EventHandler<ATAdEventArgs> onAdCloseButtonTappedEvent;
    }
    
    public interface IATInterstitialAdEvents : IHCommonEvents
    {
        // called when the ad is shown
        event EventHandler<ATAdEventArgs> onAdShowEvent;

        // called if the ad has failed to be shown
        event EventHandler<ATAdErrorEventArgs> onAdShowFailureEvent;

        // called when the ad is closed
        event EventHandler<ATAdEventArgs> onAdCloseEvent;

        // called when an user has clicked an ad
        event EventHandler<ATAdEventArgs> onAdClickEvent;

        // called when a video ad has started playing
        event EventHandler<ATAdEventArgs> onAdVideoStartEvent;

        // called if an ad video has failed to be displayed
        event EventHandler<ATAdErrorEventArgs> onAdVideoFailureEvent;

        // called when ad video has finished
        event EventHandler<ATAdEventArgs> onAdVideoEndEvent;          
    }

    public interface IATNativeAdEvents : IHCommonEvents
    {
        // triggers when the ad generates an impression
        event EventHandler<ATAdEventArgs> onAdImpressEvent;

        // triggers when the user clicks the ad
        event EventHandler<ATAdEventArgs> onAdClickEvent;

        // triggers when the ad video starts
        event EventHandler<ATAdEventArgs> onAdVideoStartEvent;

        // triggers when the ad video ends
        event EventHandler<ATAdEventArgs> onAdVideoEndEvent;

        // triggers if the ad progresses
        event EventHandler<ATAdProgressEventArgs> onAdVideoProgressEvent;

        // triggers when the ad is closed
        event EventHandler<ATAdEventArgs> onAdCloseEvent;           
    }

    public interface IATRewardedVideoEvents : IHCommonEvents
    {
        // triggers on video start
        event EventHandler<ATAdEventArgs> onAdVideoStartEvent;

        // triggers on video end
        event EventHandler<ATAdEventArgs> onAdVideoEndEvent;

        // triggers if the video fails to play
        event EventHandler<ATAdErrorEventArgs> onAdVideoFailureEvent;

        // triggers when the user has closed the ad
        event EventHandler<ATAdRewardEventArgs> onAdVideoCloseEvent;

        // triggers when the user has clicked the ad
        event EventHandler<ATAdEventArgs> onAdClickEvent;

        // triggers when the user has finsihed watching the ad and should be rewarded
        event EventHandler<ATAdEventArgs> onRewardEvent;

        event EventHandler<ATAdEventArgs> onPlayAgainStart;

        event EventHandler<ATAdEventArgs> onPlayAgainEnd;

        event EventHandler<ATAdErrorEventArgs> onPlayAgainFailure;

        event EventHandler<ATAdEventArgs> onPlayAgainClick;

        event EventHandler<ATAdEventArgs> onPlayAgainReward;
    }
}