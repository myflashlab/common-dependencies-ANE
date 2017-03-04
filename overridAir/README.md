## OverrideAIR ANE 
This ANE is the main dependency ANE which is required for ALL of MyFlashLabs ANEs. To be able to compile your projects with our ANEs, you need to have this ANE added to your project. This dependency is required for iOS and Android builds both.

V4.0.0 and higher versions of this ANE, is featured with a nice and unified way of ANE debugging system which allows you to activate ANE debugging to receive more information about how an ANE is operating in your project. To activate the core debugging system, you need to call [OverrideAir.enableDebugger()](http://myflashlab.github.io/asdoc/com/myflashlab/air/extensions/dependency/OverrideAir.html#enableDebugger()) as follow:

```actionscript
// import the ANE class to have access to its method
import com.myflashlab.air.extensions.dependency.OverrideAir;

// in your project's constructor method enable the debugger
// It is recommended to do this BEFORE initializing any other ANEs
OverrideAir.enableDebugger(myDebuggerDelegate);

// create a function with three inputs as follow to receive the debugging information
function myDebuggerDelegate($ane:String, $class:String, $msg:String):void
{
	trace("------------------");
	trace("$ane = " + $ane);
	trace("$class = " + $class);
	trace("$msg = " + $msg);
	trace("------------------");
}
```

**NOTE:** It is highly recommended to remove the debugger when you are building for production mode to avoid unnecessary operations in your app.

Read more information about this ANE here: http://www.myflashlabs.com/debug-air-native-extensions/