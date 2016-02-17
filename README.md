# Common Dependencies ANEs
When using more than one Air Native Extension in your project, it's very probable that some of the ANEs you use are sharing some identical libraries like GooglePlayServices. So, to fix this problem in our ANEs we are keeping these common libraries outside the main ANE. All you have to do is to add one or more of these common-dependency ANEs to your project. 

For you to know which ANE requires these common dependency ANEs, you need to read the **Requirements** section of that ANE where it clearly specifies which common ANEs from here you should add to your project.

As an example, look at the [Requirements section of the Facebook ANE](https://github.com/myflashlab/facebook-ANE#requirements) As you can see, it says you will need **androidSupport.ane** and **overrideAir.ane** in your project.

If you are using two ANEs which both declair that they are dependent on one of these common-dependency ANEs, you must add it only once to your project. The result will be that those two ANEs will both use from the one reference common-dependency ANE and there will be no conflict between them.

# How to use common dependency ANEs
All you have to do is to add these ANEs to your air .xml manifest file as follow. You don't have to initialize anything in your AS3 codes. just make sure they will be compiled in your project.

```xml
<!-- for androidSupport.ane you should add -->
<extensionID>com.myflashlab.air.extensions.dependency.androidSupport</extensionID>

<!-- for googlePlayServices.ane you should add -->
<extensionID>com.myflashlab.air.extensions.dependency.googlePlayServices</extensionID>

<!-- for overrideAir.ane you should add -->
<extensionID>com.myflashlab.air.extensions.dependency.overrideAir</extensionID>
```

Enjoy building Adobe Air apps,
MyFLashLabs Team