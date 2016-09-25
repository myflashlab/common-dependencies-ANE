package com.myflashlab.air.extensions.dependency
{
	import flash.events.EventDispatcher;
	import flash.external.ExtensionContext;

	/**
	 * @private
	 * 
	 * @author Hadi Tavakoli - 2/16/2016 12:54 PM
	 */
	public class Firebase_authModule extends EventDispatcher
	{
		public static const EXTENSION_ID:String = "com.myflashlab.air.extensions.dependency.firebase.auth.module";
		public static const VERSION:String = "9.6.1";
		private var _context:ExtensionContext;
		
		public function Firebase_authModule():void
		{
			_context = ExtensionContext.createExtensionContext(Firebase_authModule.EXTENSION_ID, null);
		}
		
// ---------------------------------------------------------------------------------------- methods

		
	}
}