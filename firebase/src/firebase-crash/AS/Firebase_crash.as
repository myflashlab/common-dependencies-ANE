package com.myflashlab.air.extensions.dependency
{
	import flash.events.EventDispatcher;
	import flash.external.ExtensionContext;

	/**
	 * @private
	 * 
	 * @author Hadi Tavakoli - 2/16/2016 12:54 PM
	 */
	public class Firebase_crash extends EventDispatcher
	{
		public static const EXTENSION_ID:String = "com.myflashlab.air.extensions.dependency.firebase.crash";
		public static const VERSION:String = "10.0.0";
		private var _context:ExtensionContext;
		
		public function Firebase_crash():void
		{
			_context = ExtensionContext.createExtensionContext(Firebase_crash.EXTENSION_ID, null);
		}
		
// ---------------------------------------------------------------------------------------- methods

		
	}
}