//---------------------------------------------------------------------------

#ifndef UnitFormMainH
#define UnitFormMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UnitFrameDetails.h"
#include "UnitFrameMain.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TScrollBox *ScrollBoxMainContainer;
	TFrameDetails *FrameDetails;
	TFrameMain *FrameMain;
	TPanel *PanelLineHide;
	TImage *ImageButtonClose;
	TImage *ImageButtonMinimize;
	TPanel *PanelWindowControls;
	TImage *Image1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FrameMainImageTableClick(TObject *Sender);
	void __fastcall PanelWindowControlsMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall ImageButtonCloseClick(TObject *Sender);
	void __fastcall ImageButtonCloseMouseEnter(TObject *Sender);
	void __fastcall ImageButtonCloseMouseLeave(TObject *Sender);
	void __fastcall ImageButtonMinimizeMouseEnter(TObject *Sender);
	void __fastcall ImageButtonMinimizeMouseLeave(TObject *Sender);
	void __fastcall FrameDetailsImageButtonBackClick(TObject *Sender);
	void __fastcall ImageButtonMinimizeClick(TObject *Sender);
	void __fastcall FrameShowSlide(TFrame *frame, TFrame *frameMain, DWORD direction, bool imposition);
	void __fastcall FrameMainImageReportClick(TObject *Sender);
	void __fastcall FrameMainImageAboutClick(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
