//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFrameMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrameMain *FrameMain;
//---------------------------------------------------------------------------
__fastcall TFrameMain::TFrameMain(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrameMain::FramePanelHover(TObject *Sender)
{
static_cast<TPanel*>(Sender)->Parent->Width += 10;
static_cast<TPanel*>(Sender)->Parent->Left -= 5;
static_cast<TPanel*>(Sender)->Parent->Height += 10;
static_cast<TPanel*>(Sender)->Parent->Top -= 5;
Application->ProcessMessages();
//Image1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TFrameMain::FramePanelHoverLeave(TObject *Sender)
{
static_cast<TPanel*>(Sender)->Parent->Width -= 10;
static_cast<TPanel*>(Sender)->Parent->Left += 5;
static_cast<TPanel*>(Sender)->Parent->Height -= 10;
static_cast<TPanel*>(Sender)->Parent->Top += 5;
Application->ProcessMessages();
//Image1->Visible = false;
}

