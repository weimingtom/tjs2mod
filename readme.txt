tjsDateWordMap.cc : excluded  


https://gitee.com/weimingtom/tjs2study
https://github.com/jeeb/kirikiri2
https://github.com/jeeb/kirikiri2/tree/master/kirikiri2/src/core/tjs2

----------------------------

	const std::wstring AsStdString() const
	{
		if(!Ptr) return std::wstring(TJS_W(""));
#ifdef UNICODE
		return std::wstring(c_str());
#else
			// this constant string value must match std::string in type
		//tTJSNarrowStringHolder holder(Ptr->operator const tjs_char*());
		return std::wstring(Ptr->operator const tjs_char*());
#endif
	}

---------------------------------
define:  

__WIN32__
NO_STRICT
TJS_TEXT_OUT_CRLF
TJS_JP_LOCALIZED
TJS_DEBUG_DUMP_STRING
_CRT_SECURE_NO_WARNING
TVP_LOG_TO_COMMANDLINE_CONSOLE
TVP_REPORT_HW_EXCEPTION
TVP_ENABLE_EXECUTE_AT_EXCEPTION
TJS_NO_REGEXP




