package com.myflashlab.dependency.firebase.iid;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREFunction;

import java.util.HashMap;
import java.util.Map;

/**
 * @author Hadi Tavakoli
 */
public class MyContext extends FREContext
{
	protected HashMap<String, FREFunction> functionMap;

	@Override
	public void dispose()
	{
		functionMap = null;
	}

	@Override
	public Map<String, FREFunction> getFunctions()
	{
		functionMap = new HashMap<String, FREFunction>();
		functionMap.put("command", new AirCommand());

		return functionMap;
	}
}
