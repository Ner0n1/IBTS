// RI-571227_Bushuev_DLL.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "Header.h"

extern "C" int __stdcall VSGroup()
{
	return 571227;
}

extern "C" wchar_t* __stdcall VSAuthor()
{
	setlocale(LC_ALL, "");
	wchar_t *a = new wchar_t[15];
	wcscpy_s(a,15,L"Бушуев Антон");
	return a;
}