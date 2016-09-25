package com.myflashlab.air.extensions.dependency
{
	import flash.events.EventDispatcher;
	import flash.external.ExtensionContext;

	/**
	 * @private
	 * 
	 * @author Hadi Tavakoli - 2/16/2016 12:54 PM
	 */
	public class Firebase_config extends EventDispatcher
	{
		public static const EXTENSION_ID:String = "com.myflashlab.air.extensions.dependency.firebase.config";
		public static const VERSION:String = "9.6.1";
		private var _context:ExtensionContext;
		
		public function Firebase_config():void
		{
			_context = ExtensionContext.createExtensionContext(Firebase_config.EXTENSION_ID, null);
		}
		
// ---------------------------------------------------------------------------------------- methods

		
	}
}