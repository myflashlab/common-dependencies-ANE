package com.myflashlab.air.extensions.dependency
{
	import flash.events.EventDispatcher;
	import flash.external.ExtensionContext;

	/**
	 * @private
	 * 
	 * @author Hadi Tavakoli - 2/16/2016 12:54 PM
	 * 							2/20/2017 6:40 PM
	 */
	public class Firebase_analytics extends EventDispatcher
	{
		public static const EXTENSION_ID:String = "com.myflashlab.air.extensions.dependency.firebase.analytics";
		public static const VERSION:String = "10.2.0";
		private var _context:ExtensionContext;
		
		public function Firebase_analytics():void
		{
			_context = ExtensionContext.createExtensionContext(Firebase_analytics.EXTENSION_ID, null);
		}
		
// ---------------------------------------------------------------------------------------- methods

		
	}
}