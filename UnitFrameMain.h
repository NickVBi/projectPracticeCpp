//---------------------------------------------------------------------------

#ifndef UnitFrameMainH
#define UnitFrameMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFrameMain : public TFrame
{
__published:	// IDE-managed Components
	TPanel *PanelTable;
	TImage *ImageTable;
	TImage *Image1;
	TPanel *PanelQuery;
	TImage *Image2;
	TImage *ImageQuery;
	TPanel *PanelReport;
	TImage *Image4;
	TImage *ImageReport;
	TPanel *PanelAbout;
	TImage *Image6;
	TImage *ImageAbout;
	TPanel *PanelForm;
	TImage *Image5;
	TImage *ImageForm;
	void __fastcall FramePanelHover(TObject *Sender);
	void __fastcall FramePanelHoverLeave(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFrameMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrameMain *FrameMain;
//---------------------------------------------------------------------------
#endif
