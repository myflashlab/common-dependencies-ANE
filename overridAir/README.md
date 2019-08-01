This ANE is the main dependency ANE which is required for ALL of MyFlashLabs ANEs. To be able to compile your projects with our ANEs, you need to have this ANE added to your project. This dependency works on iOS (10.0+) and Android (API 19+) builds.

## iOS App Submission ## 
**IMPORTANT:** You must notice that this ANE is using standard iOS encryption library, [CommonCrypto](https://developer.apple.com/library/archive/samplecode/CryptoCompatibility/Listings/Operations_QCCAESPadBigCryptor_m.html#//apple_ref/doc/uid/DTS40013654-Operations_QCCAESPadBigCryptor_m-DontLinkElementID_6). This means that when you are submitting your iOS app which includes this ANE, when you are asked if your app uses any encryption, you must answer YES. **The encryption we have used in the ANE is limited to that within the Apple operating system**. So [according to apple](https://help.apple.com/app-store-connect/#/devc3f64248f), no documentation is required in App Store Connect. You may also notice that this is exactly the same thing when your app makes any HTTPS calls! You may contact apple for more details about this.
![Export Compliance](https://myflashlab.github.io/resources/ExportCompliance.jpg)

---------------

## OverrideAir.enableDebugger() ##
This is a unified way of ANE debugging system which allows you to activate ANE debugging to receive more information about how an ANE is operating in your project. To activate this, you need to call [OverrideAir.enableDebugger()](https://myflashlab.github.io/asdoc/com/myflashlab/air/extensions/dependency/OverrideAir.html#enableDebugger()) before initializing any other ANEs.

```actionscript
import com.myflashlab.air.extensions.dependency.OverrideAir;

// in your project's constructor method enable the debugger
// It is recommended to do this BEFORE initializing any other ANEs
OverrideAir.enableDebugger(myDebuggerDelegate);

// create a function with three inputs as follow to receive the debugging information
function myDebuggerDelegate($ane:String, $class:String, $msg:String):void
{
	trace($ane+"("+$class+") "+$msg);
}
```

**NOTE:** It is highly recommended to remove the debugger when you are building for production mode to avoid unnecessary operations in your app.

Read more about this feature here: https://www.myflashlabs.com/debug-air-native-extensions/

## OverrideAir.isSupported ##
The method [OverrideAir.isSupported](https://myflashlab.github.io/asdoc/com/myflashlab/air/extensions/dependency/OverrideAir.html#isSupported) lets you see if Myflashlabs ANEs are supported on the current running environment or not. This is useful when you are testing your project in a simulator. Use this property and if it returns true, you can initialize other Myflashlabs ANEs. If it returns false, it means you are running your project on a simulator (Anything other than Android/iOS environment).

```actionscript
import com.myflashlab.air.extensions.dependency.OverrideAir;

if(OverrideAir.isSupported)
{
	// Initialize ANEs only if OverrideAir.isSupported is true
}
else
{
	// When you are testing your app on a simulator, you shouldn't
	// initialize ANEs.
}
```

## InvokeEvent.INVOKE on iOS ##
When dealing with ANEs on iOS, there are many of them needing access to some internal events on iOS like ```applicationDidFinishLaunch```, ```applicationOpenUrlWithOptions``` and many more. These events are not accessible from AdobeAIR. Even if they are, they are not complete. The OverrideAir ANE has been fixing this problem for a long time. It initializes its iOS native side BEFORE your AIR app even starts. Then, it will listen to all the iOS events which used to be missed by the nature of AIR apps. keep them untill AIR app is ready to receive them. Using this method, we have been able to make the development of ANEs like Facebook, FCM, OneSignal, DynamicLinks, LocalNotifications, localAuth and many more similar ANEs, possible. All these ANEs can be active in one app and they will all work fine with no conflict. However, this method had a downside. The classic *InvokeEvent.INVOKE* would have been disabled whenever the OverrideAir ANE was present in a project.

Thanks to [the feedback from the community](https://github.com/myflashlab/common-dependencies-ANE/issues/19), we were able to make sure the classic *InvokeEvent.INVOKE* still dispatches on iOS devices, all you need to do is to somehow poke the OverrideAir ANE! You can poke the ANE in many different methods. for example call *OverrideAir.isSupported* after your *InvokeEvent.INVOKE* listener. This will make sure that the missing *InvokeEvent.INVOKE* event will be rooted to the AIR app.

```actionscript
// Your application DocumentClass
public function Main()
{
	NativeApplication.nativeApplication.addEventListener(InvokeEvent.INVOKE, invokeHandler);
	
	// poke the OverrideAir ANE so it will activate the missing InvokeEvent in iOS
	if(OverrideAir.isSupported)
	{
		trace("running on a real device! ANEs should work fine on real devices");
	}
}

private function invokeHandler(e:InvokeEvent):void
{
	if (e.arguments.length > 0)
	{
		trace("invokeHandler: (" + e.reason + ") " + e.arguments);
	}
}
```

## iOS Simulator Support ##
Beside the main ANE, we also have [overrideAirSim.ane](https://github.com/myflashlab/common-dependencies-ANE/blob/master/overridAir/overrideAirSim.ane). This ANE should be used only when building for iOS simulator. Useful when Facebook app reviewers are expecting developers to provide them with a simulator version of apps. When you are trying to prepare your app for Facebook reviewers, you must make sure you are not initializing other ANEs:

```actionscript
if(OverrideAir.os == OverrideAir.ANDROID || OverrideAir.os == OverrideAir.IOS)
{
	// You are on a mobile device. you should initialize ANEs
}
else
{
	if(OverrideAir.os == OverrideAir.IOS_SIM)
	{
		// You are on iOS simulator
		// only overrideAirSim.ane and facebookSim.ane will work
	}
	else
	{
		// You are on AIR simulator!
		// ANEs don't work here!
	}
}
```