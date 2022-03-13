#pragma once
//#ifdef DLL_H
#define DLL_H

#include <iostream>

extern "C"
{
	int __stdcall VSGroup();
	wchar_t* __stdcall VSAuthor();
}
//#endif