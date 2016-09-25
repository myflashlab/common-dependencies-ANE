package com.myflashlab.dependency.firebase.auth.common;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREExtension;

/**
 * This is the first class that flash connects to
 *
 * @author Hadi Tavakoli
 */
public class MyExtension implements FREExtension
{
	public static FREContext AS3_CONTEXT;


	public FREContext createContext(String $contextType)
	{
		MyExtension.AS3_CONTEXT = new MyContext();

		return MyExtension.AS3_CONTEXT;
	}

	public void dispose()
	{
		MyExtension.AS3_CONTEXT.dispose();
		MyExtension.AS3_CONTEXT = null;
	}

	public void initialize()
	{

	}

}
