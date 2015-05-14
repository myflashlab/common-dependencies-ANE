package 
{
	import flash.display.Sprite;
	import com.doitflash.air.extensions.Dependency;
	
	/**
	 * 
	 * @author Hadi Tavakoli - 5/14/2015 1:04 PM
	 */
	public class Main extends Sprite 
	{
		
		public function Main():void 
		{
			trace(Dependency.EXTENSION_ID + " = V" + Dependency.VERSION);
		}
	}
	
}