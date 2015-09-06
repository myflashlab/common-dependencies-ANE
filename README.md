# Common Dependencies ANE
This ANE will be used in conjunction with other ANEs that may happen to have used identical third-party libraries. the most common library that is usually found in different native extensions is **android-support-v13.jar** or **android-support-v4.jar** and when using two extensions using this library in a project, you will receive many different conflict error messages in your adt compile time.

to solve this problem in our extensions, we decided to move all the possible third-party (common) dependencies to another ANE which you can simply add to your project and everything will work like before.

# what's the different between commonDependencies.ane versions?
- **V1.0** (1.19 MB) includes the older version of android-support-v13.jar which works with most of our extensions.
- **V2.0** (2.11 MB) includes the latest version of android-support-v13.jar which is needed on our Facebook V2.0
- **V3.0** (11.1 MB) includes all from previous version + latest version of google-play-services.jar which is needed for GCM V4.0
- **V4.0** (11.2 MB) includes all from previous version + overrideAdobe.jar which is needed for Facebook V3.0 and GPS V2.0

you can safely use the older commonDependencies.ane if you are not using Facebook, GCM V4.0+ or GPS V2.0+ extensions in your project.

**NOTE 1:** you must have only one commonDependencies.ane in your project. if you are not sure which one to use, use the latest version and you'll be safe.
**NOTE 2:** Using the latest version of google-play-services.jar in V3.0 and V4.0 of the dependencies ANE will cause your compile time to take longer if you are on a 32-bit windows. it's much faster on a 64-bit windows but we are hoping that Adobe will consider this long compile time for their newer Adobe SDK releases.

# How to use commonDependencies ANE
All you have to do is to add this ane to your project and make sure it is declared in the air .xml manifest file as follow:

```xml
<extensionID>com.doitflash.air.extensions.dependency</extensionID>
```

**you don't have to initialize anything in your AS3 codes. just make sure it will be compiled in your project**

yet, it's important to mention that when compiling for iOS, you must make sure that your are setting "hideAneLibSymbols" to true. if you are using FlashDevelop, your adt command should look like this:

```
adt -package -target ipa-debug-interpreter -hideAneLibSymbols yes -storetype pkcs12 -keystore "%IOS_DEV_CERT_FILE%" -storepass %IOS_DEV_CERT_PASS% -provisioning-profile %IOS_PROVISION_DEV% "%OUTPUT%" "%APP_XML%" %FILE_OR_DIR% -extdir lib/
```

and if you are using FlashBuilder, you should make sure that the "Hide ANE-Library-Symbols" check box is checked under the "Native Extensions" tab in "ActionScript Build Packaging" menu.

But if you are using Flash IDE, we really don't know how to hide ANE lib symbols! we don't use Flash IDE and we don't have much experience with it. we would appriciate if someone can tell us how to do that in Flash IDE and I will update this text :)

Enjoy building Flash apps,
MyFLashLab Team