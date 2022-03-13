//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	HINSTANCE hMyDll = LoadLibraryW(L"RI-571227_Bushuev_DLL");
	if (hMyDll == NULL)
	{
		Edit1->Text="err";
	}
	PVSAuthor Author;
	Author = (PVSAuthor)GetProcAddress(hMyDll,"VSAuthor");
	if (Author == NULL)
	{
	   FreeLibrary(hMyDll);
	   Label1->Caption="err 1";
       system("STOP");
	}
	else
	{
	   Edit1->Text=Author();
	}
	PVSGroup Group;
	Group = (PVSGroup)GetProcAddress(hMyDll,"VSGroup");
	if (Group == NULL)
	{
	   FreeLibrary(hMyDll);
	   Edit2->Text="err 2";
	   system("STOP");
	}
	else
	{
	  Edit2->Text=Group();
	}
	FreeLibrary(hMyDll);
	Group=NULL;
	Author=NULL;
}
//---------------------------------------------------------------------------


