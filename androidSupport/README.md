## AndroidSupport ANE ##
This ANE has many shared libraries between different ANEs and Android is using this system to make sure different Android libraries are working fine when running on different Android devices/versions.

The ```androidSupport-Vx.x.x-full.ane``` includes all necessary Android Support libraries provided by Android SDK. However, the **lite** version does not include the following libs:

* design
* appcompat-v7
* mediarouterV7

*Hint 1: Do NOT use both of these ANEs in your project. only pick one of them.*  
*Hint 2: Although we are keeping older version, always use the latest version of this ANE.*  

## Lite or full? ##
So, you are still wondering which version to use? it's simple to know, first use the **lite** version, ```androidSupport-Vx.x.x-lite.ane``` and try to compile your project. Does it compile fine? Ok, good, you can keep on using the lite version. If an error was thrown, use the **full** version instead.

## Why there's a lite version anyhow? ##
appcompat-v7 is huge and takes a lot of time to be initialized internally. the barcode ANE for example would take a lot of time to warmup if using the full version. You may use the lite version if you are using the barcode ANE.

Some ANEs may need the full version though. like the Facebook ANE. So you're forced to use the full version. If you have Facebook and barcode ANEs in one project, you will be forced to use the full version.

If you have a question, please leave a new issue here on this repository.

Enjoy building AIR apps,  
Myflashlabs Team :heart: