//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFrameDetails.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrameDetails *FrameDetails;
//---------------------------------------------------------------------------
__fastcall TFrameDetails::TFrameDetails(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrameDetails::ImageButtonBackMouseEnter(TObject *Sender)
{
ImageButtonBack->Width += 4;
ImageButtonBack->Left -= 2;
ImageButtonBack->Height += 4;
ImageButtonBack->Top -= 2;
}
//---------------------------------------------------------------------------

void __fastcall TFrameDetails::ImageButtonBackMouseLeave(TObject *Sender)
{
ImageButtonBack->Width -= 4;
ImageButtonBack->Left += 2;
ImageButtonBack->Height -= 4;
ImageButtonBack->Top += 2;
}
//---------------------------------------------------------------------------

