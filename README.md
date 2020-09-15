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
**Override Air** This ANE is used to override some ANE methods provided by Adobe along with overriding some native methods on iOS and Android so ANE developers can have access to them with more comfort. This will help decrease the process time of developing an ANE greatly. Note that this ANE is always required (on Android and iOS) if you are using any of MyFlashLabs ANEs. You usually don't need to initialize this ANE in your project. Our other ANEs will use it internally whenever they need it.
```xml
<!-- overrideAir.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.overrideAir</extensionID>
```

------------------------------------------------------
**Gson** V2.8.21
```xml
<!-- gson.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.gson</extensionID>
```

------------------------------------------------------
**tensorflow** V1.13.1
```xml
<!-- tensorflow.ane -->
<extensionID>com.myflashlab.air.extensions.dependency.tensorflow</extensionID>
```

------------------------------------------------------
**Androidx Libraries**. https://developer.android.com/jetpack/androidx/versions
```xml
<extensionID>com.myflashlab.air.extensions.dependency.androidx.arch</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.biometric</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.browser</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.cardview</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.core</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.design</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.exifinterface</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.lifecycle</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.mediarouter</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.utils</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.androidx.vector</extensionID>
```


------------------------------------------------------
**Google Play Services**. https://developers.google.com/android/guides/releases
```xml
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads.lite</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.analytics</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.auth</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.base</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.basement</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.clearcut</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.drive</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.flags</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.games</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.gass</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.location</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.maps</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.measurementBase</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.panorama</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.phenotype</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.places</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.stats</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.tagmanager</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.tasks</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.vision</extensionID>
```

------------------------------------------------------
**Google Virtual Reality**. current ANE version is V1.70.1 https://developers.google.com/vr/android/release-notes
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
<extensionID>com.myflashlab.air.extensions.dependency.firebase.abt</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.addons.fcm</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.addons.firestore</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.addons.squareup</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.analytics</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.appindexing</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.auth</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.common</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.config</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.database</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.database.collection</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.datatransport</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.dynamicLinks</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.encoders.json</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.firestore</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.functions</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.iid</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.inappmessaging</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.installations</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.measurement.connector</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.messaging</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.ml</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.perf</extensionID>

<extensionID>com.myflashlab.air.extensions.dependency.firebase.storage</extensionID>
```

Enjoy building Adobe Air apps,  
[MyFlashLabs Team](http://www.myflashlabs.com/)