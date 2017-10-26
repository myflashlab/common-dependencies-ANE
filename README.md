**NOTICE:** If you are here to download dependencies to use in your **Firebase** enabled project, make sure to read [this page](https://github.com/myflashlab/Firebase-ANE/blob/master/Dependencies.md) to find the right branch of the dependencies.

----------------------------------------

The main job of *Common Dependency ANEs* is to solve the problem of ANE conflicts mainly in Android builds. When using a lot of different ANEs in your Air project, it's very probable that some of these ANEs are using some shared libraries like the Google Play Services. If this happens, you won't be able to compile your project while using the two ANEs! This problem often happens when you are using ANEs from different providers. So, with this package of so called *Common Dependency ANEs*, we are trying to solve this problem once and forever. We are allowing other ANE providers/developers to freely use these ANEs in their projects, even the commercial ones! The Adobe Air community will greatly benefit from this we're sure.

<a rel="license" href="http://creativecommons.org/licenses/by-nd/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nd/4.0/88x31.png" /></a>

The other job of these ANEs is to make sure you are adding the minimum required amount of native code to your project. This will help you decrease the byte size of your final application. This approach will make sure your apps will be smaller in size compared to any other solutions.

# For Adobe Air developers
If you are an Air developer, using ANEs in your project, you can benefit from common dependencies based on what ANEs you are using. For you to know which ANE requires these common dependencies, you need to read the **Requirements** section of that ANE where it clearly specifies which common ANEs from here you should add to your project. As an example, look at the [Requirements section of our Facebook ANE](https://github.com/myflashlab/facebook-ANE#requirements)

# For ANE developers/providers
We are inviting ALL Air Native Extension developers/providers to freely use these dependencies in their free or commercial ANE products. These ANEs include the native APIs + required resources and when added to the air manifest .xml, they will automatically be ready to be used. You can address the native APIs provided by these ANEs from within your ANE. if you have any question about how you can use these ANEs in your ANE development process, don't hesitate to [contact us](http://www.myflashlabs.com/contact/).

# How up-to-date are we?
VERY! we are constantly monitoring the latest releases of these shared libraries and will update these ANEs as soon as we feel it's vital and required. This does not necessarily mean that the ANE version should match the native version.

# How to use common dependency ANEs
These ANEs are transpiled from native API to ActionScript. to add them to your project, all you have to do is to add these ANEs to your air .xml manifest file. You don't have to initialize them in your project. just make sure they will be compiled in your project and you're done.

------------------------------------------------------
**Android Support Library**. current ANE version is V25.3.1 https://developer.android.com/topic/libraries/support-library/revisions.html
```xml
<!-- androidSupport.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport</extensionID>
```

------------------------------------------------------
**Override Air** current version is V5.0.0 This ANE is used to override some ANE methods provided by Adobe along with overriding some native methods on iOS and Android so ANE developers can have access to them with more comfort. This will help decrease the process of developing an ANE greatly. Note that this ANE is always required (on Android and iOS) if you are using any of MyFlashLabs ANEs. You don't need to initialize this ANE in your project. Our other ANEs will use it anyway whenever they need it.
```xml
<!-- overrideAir.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.overrideAir</extensionID>
```

------------------------------------------------------
**Google Play Services**. current ANE version is V11.0.2 https://developers.google.com/android/guides/releases
```xml
<!-- googlePlayServices_ads.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads</extensionID>

<!-- googlePlayServices_adsLite.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads.lite</extensionID>

<!-- googlePlayServices_analytics.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.analytics</extensionID>

<!-- googlePlayServices_analyticsImpl.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.analytics.impl</extensionID>

<!-- googlePlayServices_appinvite.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.appinvite</extensionID>

<!-- googlePlayServices_auth.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.auth</extensionID>

<!-- googlePlayServices_authBase.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.auth.base</extensionID>

<!-- googlePlayServices_base.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.base</extensionID>

<!-- googlePlayServices_basement.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.basement</extensionID>

<!-- googlePlayServices_clearcut.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.clearcut</extensionID>

<!-- googlePlayServices_drive.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.drive</extensionID>

<!-- googlePlayServices_games.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.games</extensionID>

<!-- googlePlayServices_gass.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.gass</extensionID>

<!-- googlePlayServices_gcm.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.gcm</extensionID>

<!-- googlePlayServices_identity.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.identity</extensionID>

<!-- googlePlayServices_iid.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.iid</extensionID>

<!-- googlePlayServices_instantapps.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.instantapps</extensionID>

<!-- googlePlayServices_location.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.location</extensionID>

<!-- googlePlayServices_maps.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.maps</extensionID>

<!-- googlePlayServices_nearby.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.nearby</extensionID>

<!-- googlePlayServices_panorama.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.panorama</extensionID>

<!-- googlePlayServices_places.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.places</extensionID>

<!-- googlePlayServices_plus.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.plus</extensionID>

<!-- googlePlayServices_tasks.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.tasks</extensionID>
```

------------------------------------------------------
**Google Virtual Reality**. current ANE version is V1.40.0 https://developers.google.com/vr/android/release-notes
```xml
<!-- gvr_common.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gvr.common</extensionID>

<!-- gvr_commonwidget.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gvr.commonwidget</extensionID>

<!-- gvr_panowidget.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gvr.panowidget</extensionID>

<!-- gvr_videowidget.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gvr.videowidget</extensionID>
```

------------------------------------------------------
**Firebase**. current ANE version is V11.0.2 (Jun 29, 2017) https://firebase.google.com/support/release-notes/android
```xml
<!-- firebase_analyticsImpl.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.analytics.impl</extensionID>

<!-- firebase_appindexing.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.appindexing</extensionID>

<!-- firebase_auth.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.auth</extensionID>

<!-- firebase_common.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.common</extensionID>

<!-- firebase_config.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.config</extensionID>

<!-- firebase_crash.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.crash</extensionID>

<!-- firebase_database.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.database</extensionID>

<!-- firebase_databaseConnection.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.database.connection</extensionID>

<!-- firebase_dynamicLinks.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.dynamicLinks</extensionID>

<!-- firebase_iid.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.iid</extensionID>

<!-- firebase_messaging.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.messaging</extensionID>

<!-- firebase_storage.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.storage</extensionID>

<!-- firebase_storageCommon.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.storage.common</extensionID>

<!-- firebase-analytics.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.analytics</extensionID>
```

Enjoy building Adobe Air apps,  
[MyFlashLabs Team](http://www.myflashlabs.com/)