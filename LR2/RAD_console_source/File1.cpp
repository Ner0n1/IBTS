#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
#include <iostream>
#include <stdio.h>
#include "File2.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{
	cout<<"�����"<<endl;
	Author();
	Group();
	system("PAUSE");
	return 0;
}
