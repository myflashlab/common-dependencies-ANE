package com.myflashlab.air.extensions.dependency
{
	import flash.events.EventDispatcher;
	import flash.external.ExtensionContext;

	/**
	 * @private
	 * 
	 * @author Hadi Tavakoli - 11/23/2016 1:44 PM
	 */
	public class Firebase_appindexing extends EventDispatcher
	{
		public static const EXTENSION_ID:String = "com.myflashlab.air.extensions.dependency.firebase.appindexing";
		public static const VERSION:String = "10.0.0";
		private var _context:ExtensionContext;
		
		public function Firebase_appindexing():void
		{
			_context = ExtensionContext.createExtensionContext(Firebase_appindexing.EXTENSION_ID, null);
		}
		
// ---------------------------------------------------------------------------------------- methods

		
	}
}