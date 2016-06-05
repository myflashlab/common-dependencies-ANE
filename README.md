# Common Dependencies ANEs
Many of our ANEs are using shared libraries. To make sure your app size is not increased with unused native codes we took one step deeper into these shared libraries and created seperated ANEs holding different shared native libs. This approach will make sure your apps will be smaller in size compared to any other solutions.

For you to know which ANE requires these common dependency ANEs, you need to read the **Requirements** section of that ANE where it clearly specifies which common ANEs from here you should add to your project.

As an example, look at the [Requirements section of the Facebook ANE](https://github.com/myflashlab/facebook-ANE#requirements)

If you are using two ANEs which both declair that they are dependent on one of these common-dependency ANEs, you must add it only once to your project. The result will be that those two ANEs will both use the one reference common-dependency ANE and there will be no conflict between them and eventually a smaller file size.

# How to use common dependency ANEs
All you have to do is to add these ANEs to your air .xml manifest file as follow. You don't have to initialize anything in your AS3 codes. just make sure they will be compiled in your project.

```xml
<!-- androidSupport.ane V23.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport</extensionID>

<!-- overrideAir.ane V2.0.0 -->
<extensionID>com.myflashlab.air.extensions.dependency.overrideAir</extensionID>

<!-- googlePlayServices_ads.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads</extensionID>

<!-- googlePlayServices_adsLite.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.ads.lite</extensionID>

<!-- googlePlayServices_auth.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.auth</extensionID>

<!-- googlePlayServices_authBase.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.auth.base</extensionID>

<!-- googlePlayServices_base.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.base</extensionID>

<!-- googlePlayServices_basement.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.basement</extensionID>

<!-- googlePlayServices_drive.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.drive</extensionID>

<!-- googlePlayServices_games.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.games</extensionID>

<!-- googlePlayServices_gcm.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.gcm</extensionID>

<!-- googlePlayServices_iid.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.iid</extensionID>

<!-- googlePlayServices_location.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.location</extensionID>

<!-- googlePlayServices_plus.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.plus</extensionID>

<!-- googlePlayServices_tasks.ane V9.0.1 -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices.tasks</extensionID>
```

Enjoy building Adobe Air apps,  
MyFLashLabs Team