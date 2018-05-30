//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UnitFrameDetails"
#pragma link "UnitFrameMain"
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FormCreate(TObject *Sender)
{
FrameMain->PanelTable->Color = TColor(RGB(126,56,120));
FrameMain->PanelQuery->Color = TColor(RGB(0,163,0));
FrameMain->PanelAbout->Color = TColor(RGB(255,196,13));
FrameMain->PanelReport->Color = TColor(RGB(238,17,17));
FrameMain->PanelForm->Color = TColor(RGB(153,180,51));
PanelWindowControls->Color = TColor(RGB(29,29,29));
FrameMain->Color = TColor(RGB(29,29,29));
FrameDetails->Color = TColor(RGB(29,29,29));

Application->ProcessMessages();
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FrameMainImageTableClick(TObject *Sender)
{
//FrameShowSlide(FrameDetails, FrameMain, 2, false);
FrameShowSlide(FrameDetails, FrameMain, AW_VER_NEGATIVE, false);
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::PanelWindowControlsMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
ReleaseCapture();
SendMessage(FormMain->Handle, WM_NCLBUTTONDOWN, HTCAPTION, 0);
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ImageButtonCloseClick(TObject *Sender)
{
//AnimateWindow(FormMain->Handle, 200, AW_CENTER|AW_HIDE);
AnimateWindow(FormMain->Handle, 200, AW_VER_NEGATIVE|AW_HOR_POSITIVE|AW_HIDE);
Close();
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ImageButtonCloseMouseEnter(TObject *Sender)
{
ImageButtonClose->Picture->LoadFromFile(ExtractFilePath(Application->ExeName)+"../../images/close_window-261.png") ;
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ImageButtonCloseMouseLeave(TObject *Sender)
{
ImageButtonClose->Picture->LoadFromFile(ExtractFilePath(Application->ExeName)+"../../images/close_window-26.png") ;
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ImageButtonMinimizeMouseEnter(TObject *Sender)
{
ImageButtonMinimize->Picture->LoadFromFile(ExtractFilePath(Application->ExeName)+"../../images/minimize_window-261.png") ;
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ImageButtonMinimizeMouseLeave(TObject *Sender)
{
ImageButtonMinimize->Picture->LoadFromFile(ExtractFilePath(Application->ExeName)+"../../images/minimize_window-26.png") ;
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FrameDetailsImageButtonBackClick(TObject *Sender)
{   /*
frame->Visible = true;
frame->Top = 0;
frame->Left = 0;
frame->BringToFront();
frame->Hide();
AnimateWindow(frame->Handle, 500, direction);
frame->Show();
frameMain->Visible = false;
	 */  /*
FrameMain->Visible = true;

FrameMain->BringToFront();
AnimateWindow(FrameMain->Handle, 500, AW_HOR_NEGATIVE);
//frame->Show();
FrameDetails->Visible = false;       */
FrameShowSlide(FrameMain ,  FrameDetails, AW_HOR_NEGATIVE|AW_HOR_POSITIVE, false);


}
//---------------------------------------------------------------------------
void __fastcall TFormMain::FrameShowSlide(TFrame *frame, TFrame *frameMain, DWORD direction, bool imposition = false) {
frame->Visible = true;
frame->Top = 0;
frame->Left = 0;
frame->BringToFront();
frame->Hide();
AnimateWindow(frame->Handle, 500, direction);
frame->Show();
frameMain->Visible = false;


/************************************************
My varian
//**************************************************
frame->Visible = true;
frame->Top = 0;
frame->Left = 0;
frame->BringToFront();
switch (direction) {
	case 0:
		frame->Top = -frame->Height;
		for (; frame->Top < 0; frame->Top+=10) {
			if (imposition) {
				frameMain->Top += 10;
			}
			Application->ProcessMessages();
		}
		break;
	case 1:
		frame->Left = frame->Height;
		for (; frame->Left > 0; frame->Left-=15) {
			if (imposition) {
				frameMain->Left -= 15;
			}
			Application->ProcessMessages();
		}
		break;
	case 2:
		frame->Top = +frame->Height;
		for (; frame->Top > 0; frame->Top-=10) {
			if (imposition) {
				frameMain->Top -= 10;
			}
			Application->ProcessMessages();
		}
		break;
	case 3:
		frame->Left = -frame->Height;
		for (; frame->Left < 0; frame->Left+=15) {
			if (imposition) {
				frameMain->Left += 15;
			}
			Application->ProcessMessages();
		}
		break;
}
frameMain->Visible = false;
/********************************************/

}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ImageButtonMinimizeClick(TObject *Sender)
{
FormMain->WindowState = wsMinimized;
}
//---------------------------------------------------------------------------






void __fastcall TFormMain::FrameMainImageReportClick(TObject *Sender)
{
FrameDetails->Visible = true;
FrameDetails->Top = 0;
FrameDetails->Left = 0;
FrameDetails->BringToFront();
FrameDetails->Hide();
AnimateWindow(FrameDetails->Handle, 500, AW_VER_NEGATIVE);
FrameDetails->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::FrameMainImageAboutClick(TObject *Sender)
{
FrameDetails->Visible = true;
FrameDetails->Top = 0;
FrameDetails->Left = 0;
FrameDetails->BringToFront();
//FrameDetails->Show();
AnimateWindow(FrameMain->Handle, 500, AW_VER_NEGATIVE|AW_SLIDE|AW_HIDE);
//FrameMain->Show();
FrameMain->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::Image1Click(TObject *Sender)
{
PanelLineHide->Visible = false;
PanelLineHide->Visible = false;
PanelWindowControls->Visible = false;
Image1->Visible = false;
ImageButtonClose->Visible = false;
ImageButtonMinimize->Visible = false;
FormMain->WindowState = wsMaximized;
ScrollBoxMainContainer->Align = alClient;
FrameMain->Align = alClient;
FrameDetails->Align = alClient;

}
//---------------------------------------------------------------------------

