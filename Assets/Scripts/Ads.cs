using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UNITY_EDITOR || UNITY_ANDROID || UNITY_IOS
using UnityEngine.Advertisements;
#endif

public static class Ads {
    public static void Init() {
        /*IronSourceInterstitialEvents.onAdReadyEvent += DoShowAd;
        IronSourceInterstitialEvents.onAdLoadFailedEvent += (error) => LogError(error);
        IronSourceInterstitialEvents.onAdShowFailedEvent += (error, info) => LogError(error);*/
    }


    public static void ShowAd() {
        /*if (IronSource.Agent.isInterstitialReady()) {
            DoShowAd(null);
        }
        else {
            IronSource.Agent.loadInterstitial();
        }*/
    }

    /*private static void DoShowAd(IronSourceAdInfo info) {
        IronSource.Agent.showInterstitial();
    }

    private static void LogError(object error) {
        Debug.LogError(error);
    }*/
}
