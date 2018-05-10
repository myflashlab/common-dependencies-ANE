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