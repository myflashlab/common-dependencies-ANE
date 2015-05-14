# Common Dependencies ANE
This ANE will be used in conjunction with other ANEs that may happen to have used identical third-party libraries. the most common library that is usually found in different native extensions is **android-support-v13.jar** or **android-support-v4.jar** and when using two extensions using this library in a project, you will receive many different conflict error messages in your adt compile time.

to solve this problem in our extensions, we decided to move all the possible third-party (common) dependencies to another ANE which you can simply add to your project and everything will work like before.

# How to use commonDependencies.ane
All you have to do is to add this ane to your project and make sure it is declared in the air .xml manifest file as follow:

```xml
<extensionID>com.doitflash.air.extensions.dependency</extensionID>
```

** you don't have to initialize anything in your AS3 codes. just make sure it will be compiled in your project and it's done!**

yet, it's important to mention that when compiling for iOS, you must make sure that your are setting "hideAneLibSymbols" to true. if you are using FlashDevelop, your adt command should look like this:

```
adt -package -target ipa-debug-interpreter -hideAneLibSymbols yes -storetype pkcs12 -keystore "%IOS_DEV_CERT_FILE%" -storepass %IOS_DEV_CERT_PASS% -provisioning-profile %IOS_PROVISION_DEV% "%OUTPUT%" "%APP_XML%" %FILE_OR_DIR% -extdir lib/
```

and if you are using FlashBuilder, you should make sure that the "Hide ANE-Library-Symbols" is checked under the "Native Extensions" tab in "ActionScript Build Packaging" menu.

But if you are using Flash IDE, we really don't know how to hide ANE lib symbols! we don't use Flash IDE and we don't have much experience with it. we would appriciate if someone can tell us how to do that in Flash IDE and I will update this text :)

Enjoy building Flash apps,
MyFLashLab Team