This ANE is the main dependency ANE which is required for ALL of MyFlashLabs ANEs. To be able to compile your projects with our ANEs, you need to have this ANE added to your project. This dependency is required for iOS and Android builds, both.

## OverrideAir.enableDebugger() ##
Since V4.0.0, this ANE, is featured with a nice and unified way of ANE debugging system which allows you to activate ANE debugging to receive more information about how an ANE is operating in your project. To activate the core debugging system, you need to call [OverrideAir.enableDebugger()](https://myflashlab.github.io/asdoc/com/myflashlab/air/extensions/dependency/OverrideAir.html#enableDebugger()) as follow:

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
Since V5.1.2 we have added a property [OverrideAir.isSupported](https://myflashlab.github.io/asdoc/com/myflashlab/air/extensions/dependency/OverrideAir.html#isSupported) so you can call and see if Myflashlabs ANEs are supported on the current running environment or not. This is useful when you are testing your project in an emulator. Use this property and if it returns true, you can initialize other Myflashlabs ANEs. If it returns false, it means you are running your project on an emulator (Anything other than Android/iOS environment).

```actionscript
import com.myflashlab.air.extensions.dependency.OverrideAir;

if(OverrideAir.isSupported)
{
	// Initialize ANEs only if OverrideAir.isSupported is true
}
else
{
	// When you are testing your app on an emulator, you shouldn't
	// initialize ANEs.
}
```

## InvokeEvent.INVOKE on iOS ##
When dealing with ANEs on iOS, there are many of them needing access to some internal events on iOS like ```applicationDidFinishLaunch```, ```applicationOpenUrlWithOptions``` and many more. These events are not accessible from AdobeAIR. Event if they are, they are not complete. The OverrideAir ANE has been fixing this problem for a long time. It initializes its iOS native side BEFORE your AIR app even starts. Then, it will listen to all the iOS events which used to be missed by the nature of AIR apps. keep them untill AIR app is ready to receive them. Using this method, we have been able to make the development of ANEs like Facebook, FCM, DynamicLinks, LocalNotifications, and many more similar ANEs, possible. All these ANEs can be active in one app and they will all work fine with no conflict. However, this method had a downside. The classic *InvokeEvent.INVOKE* would have been disabled whenever the OverrideAir ANE was present in a project.

Since V5.1.3, we have fixed this problem thanks to [the feedback from the community](https://github.com/myflashlab/common-dependencies-ANE/issues/19). To make sure the classic *InvokeEvent.INVOKE* still dispatches on iOS devices, all you need to do is to somehow poke the OverrideAir ANE! You can poke the ANE in many different methods. for example call *OverrideAir.isSupported* after your *InvokeEvent.INVOKE* listener. This will make sure that the missing *InvokeEvent.INVOKE* event will be rooted to the AIR app.

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
Since V5.1.4, [overrideAirSim.ane](https://github.com/myflashlab/common-dependencies-ANE/blob/master/overridAir/overrideAirSim.ane) is added. This ANE should be used only when building for iOS simulator. Why we have added this ANE? well, Facebook app reviewers are expecting developers to provide them with a simulator version of apps. Although you are able to talk to them and tell them that it will not be possible to provide simulator versions of your app because they are provided with ANEs and AdobeAIR, bla, bla, bla... Sometimes they will accept your explanation and sometimes they don't. So, to avoid all these, we have now included the iOS simulator version of the OverideAir and Facebook ANEs.

When you are trying to prepare your app for Facebook reviewers, you must make sure you are not initializing other ANEs:

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