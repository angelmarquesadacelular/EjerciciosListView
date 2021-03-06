#pragma once  //______________________________________ EjerciciosLista.h  
#include "Resource.h"
class EjerciciosLista : public Win::Dialog
{
public:
	EjerciciosLista()
	{
	}
	~EjerciciosLista()
	{
	}

	Win::ImageList imageList;
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::ListView lv1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(336);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(189);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosLista";
		lv1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | LVS_REPORT, 22, 14, 307, 168, hWnd, 1000);
		lv1.SetExtStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lv1.Font = fontArial014A;
	}
	//_________________________________________________
	void lv1_ItemActivate(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (lv1.IsEvent(e, LVN_ITEMACTIVATE)) { lv1_ItemActivate(e); return true; }
		return false;
	}
};
