#include <stdio.h>
#include <tchar.h>
#include "tjs.h"
#include "tjsError.h"

//see https://krkrz.github.io/krkr2doc/tjs2doc/contents/simple.html
int main()
{
	//setlocale(LC_ALL, "");

	tTJS *tjsengine = new tTJS();

	try
	{
		tTJSVariant result;

		tjsengine->ExecScript(
			TJS_W("function test(x, y) { return x*y; } \n")
			TJS_W("return test(4, 5);\n"),
			&result, NULL,
			TJS_W("test code"));

		printf("Result : %d\n", (int)result);
	}
	catch (eTJSError &e)
	{
		printf("Error : %ls\n", e.GetMessage().c_str());
	}
	catch (...)
	{
		printf("Error\n");
	}

	tjsengine->Shutdown();
	tjsengine->Release();
	getchar();
	return 0;
}

