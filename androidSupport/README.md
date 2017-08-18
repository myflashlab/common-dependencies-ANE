## AndroidSupport ANE ##
This ANE has many shared libraries between different ANEs and Android is using this system to make sure different Android libraries are working fine when running on different Android devices/versions.

In most cases, using ```androidSupport-full.ane``` in your project will do the job just fine but occasionally, the full version will slow down some ANEs like the barcode scanner ANE. This happens because of the new appcomptV7 library. To fix this problem, we also released the ```androidSupport-lite.ane``` version and removed the appcomptV7 library from it.

*Hint: Do NOT use both of these ANEs in your project. only pick one of them.*