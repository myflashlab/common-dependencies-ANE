The main job of *Common Dependency ANEs* is to solve the problem of ANE conflicts mainly in Android builds. When using a lot of different ANEs in your Air project, it's very probable that some of these ANEs are using some shared libraries like the Google Play Services. If this happens, you won't be able to compile your project while using the two ANEs! This problem often happens when you are using ANEs from different providers. So, with this package of so called *Common Dependency ANEs*, we are trying to solve this problem once and forever.

<a rel="license" href="http://creativecommons.org/licenses/by-nd/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nd/4.0/88x31.png" /></a>

The other job of these ANEs is to make sure you are adding the minimum required amount of native code to your project. This will help you decrease the byte size of your final application. This approach will make sure your apps will be smaller in size compared to any other solutions.

# Are you building your own ANE?
We are inviting all AIR Native Extension developers/providers to freely use these dependencies in their free or commercial ANE products. These ANEs include the native APIs + required resources and when added to the AIR manifest .xml, they will automatically be ready to be used. You can address the native APIs provided by these ANEs from within your ANE.

# How up-to-date are we?
VERY! we are constantly monitoring the latest releases of these shared libraries and will update these ANEs as soon as we feel it's vital and required. This does not necessarily mean that the ANE version should match the native version.

# How to use common dependency ANEs
To add these ANEs to your project, all you have to do is to add them to your air .xml manifest file. You don't need to initialize them in your project. just make sure they will be compiled in your project and you're done.

------------------------------------------------------
**Override Air** current version is V6.1.1 This ANE is used to override some ANE methods provided by Adobe along with overriding some native methods on iOS and Android so ANE developers can have access to them with more comfort. This will help decrease the process time of developing an ANE greatly. Note that this ANE is always required (on Android and iOS) if you are using any of MyFlashLabs ANEs. You usually don't need to initialize this ANE in your project. Our other ANEs will use it internally whenever they need it.
```xml
<!-- overrideAir.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.overrideAir</extensionID>
```

------------------------------------------------------
**Bolts** V1.4.0
```xml
<!-- bolts.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.bolts</extensionID>
```

------------------------------------------------------
**Gson** V2.8.2
```xml
<!-- gson.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gson</extensionID>
```

------------------------------------------------------
**tensorflow** V1.12.0
```xml
<!-- bolts.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.tensorflow</extensionID>
```

------------------------------------------------------
**Android Support Libraries**. https://developer.android.com/topic/libraries/support-library/revisions.html
```xml
<!-- androidSupport-core.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.core</extensionID>

<!-- androidSupport-v4.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.v4</extensionID>

<!-- androidSupport-appcompatV7.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.appcompatV7</extensionID>

<!-- androidSupport-arch.ane V1.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.arch</extensionID>

<!-- androidSupport-cardviewV7.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.cardviewV7</extensionID>

<!-- androidSupport-customtabs.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.customtabs</extensionID>

<!-- androidSupport-design.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.design</extensionID>

<!-- androidSupport-exifinterface.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.exifinterface</extensionID>

<!-- androidSupport-mediarouterV7.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.mediarouterV7</extensionID>

<!-- androidSupport-v13.ane V27.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport.v13</extensionID>
```


------------------------------------------------------
**Google Play Services**. https://developers.google.com/android/guides/releases
```xml
<!-- googlePlayServices_ads.ane V17.2.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads</extensionID>

<!-- googlePlayServices_adsLite.ane V17.2.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads.lite</extensionID>

<!-- googlePlayServices_analytics.ane V16.0.8 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.analytics</extensionID>

<!-- googlePlayServices_appinvite.ane V16.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.appinvite</extensionID>

<!-- googlePlayServices_auth.ane V16.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.auth</extensionID>

<!-- googlePlayServices_base.ane V16.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.base</extensionID>

<!-- googlePlayServices_basement.ane V16.2.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.basement</extensionID>

<!-- googlePlayServices_clearcut.ane V16.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.clearcut</extensionID>

<!-- googlePlayServices_drive.ane V16.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.drive</extensionID>

<!-- googlePlayServices_flags.ane V16.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.flags</extensionID>

<!-- googlePlayServices_games.ane V17.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.games</extensionID>

<!-- googlePlayServices_gass.ane V17.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.gass</extensionID>

<!-- googlePlayServices_location.ane V16.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.location</extensionID>

<!-- googlePlayServices_maps.ane V16.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.maps</extensionID>

<!-- googlePlayServices_measurementBase.ane V16.4.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.measurementBase</extensionID>

<!-- googlePlayServices_panorama.ane V16.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.panorama</extensionID>

<!-- googlePlayServices_phenotype.ane V16.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.phenotype</extensionID>

<!-- googlePlayServices_places.ane V16.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.places</extensionID>

<!-- googlePlayServices_stats.ane V16.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.stats</extensionID>

<!-- googlePlayServices_tagmanager.ane V16.0.8 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.tagmanager</extensionID>

<!-- googlePlayServices_tasks.ane V16.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.tasks</extensionID>

<!-- googlePlayServices_vision.ane V17.0.2 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.vision</extensionID>
```

------------------------------------------------------
**Google Virtual Reality**. current ANE version is V1.70.0 https://developers.google.com/vr/android/release-notes
```xml
<!-- gvr_base.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gvr.base</extensionID>

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
**Firebase**. https://firebase.google.com/support/release-notes/android
```xml
<!-- firebase_abt.ane V17.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.abt</extensionID>

<!-- firebase_addons.ane V2.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.addons</extensionID>

<!-- firebase_analytics.ane V16.4.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.analytics</extensionID>

<!-- firebase_appindexing.ane V17.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.appindexing</extensionID>

<!-- firebase_auth.ane V16.2.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.auth</extensionID>

<!-- firebase_common.ane V16.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.common</extensionID>

<!-- firebase_config.ane V16.5.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.config</extensionID>

<!-- firebase_database.ane V16.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.database</extensionID>

<!-- firebase_databaseCollection.ane V16.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.database.collection</extensionID>

<!-- firebase_dynamicLinks.ane V16.1.8 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.dynamicLinks</extensionID>

<!-- firebase_firestore.ane V18.2.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.firestore</extensionID>

<!-- firebase_functions.ane V16.3.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.functions</extensionID>

<!-- firebase_iid.ane V17.1.2 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.iid</extensionID>

<!-- firebase_iid.ane V17.1.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.inappmessaging</extensionID>

<!-- firebase_measurementConnector.ane V17.0.1  -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.measurement.connector</extensionID>

<!-- firebase_messaging.ane V17.6.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.messaging</extensionID>

<!-- firebase_ml.ane V19.0.3 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.ml</extensionID>

<!-- firebase_perf.ane V16.2.5 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.perf</extensionID>

<!-- firebase_storage.ane V16.1.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.firebase.storage</extensionID>
```

Enjoy building Adobe Air apps,  
[MyFlashLabs Team](http://www.myflashlabs.com/)