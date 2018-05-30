//---------------------------------------------------------------------------

#ifndef UnitFrameDetailsH
#define UnitFrameDetailsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFrameDetails : public TFrame
{
__published:	// IDE-managed Components
	TButton *Button1;
	TImage *ImageButtonBack;
	void __fastcall ImageButtonBackMouseEnter(TObject *Sender);
	void __fastcall ImageButtonBackMouseLeave(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrameDetails(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrameDetails *FrameDetails;
//---------------------------------------------------------------------------
#endif
