object FormMain: TFormMain
  Left = 0
  Top = 93
  BorderStyle = bsNone
  Caption = 'FormMain'
  ClientHeight = 746
  ClientWidth = 1080
  Color = clFuchsia
  TransparentColor = True
  TransparentColorValue = clFuchsia
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Segoe UI'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ImageButtonClose: TImage
    Left = 1054
    Top = 0
    Width = 26
    Height = 26
    Align = alRight
    Picture.Data = {
      0954506E67496D61676589504E470D0A1A0A0000000D494844520000001A0000
      001A0806000000A94A4CCE0000010E4944415478DACDD64B0AC2301000D04CED
      5E0537D241A1780C050FE05D75D103087A0CDD481AB7BAB7131321106A9AFE4B
      074A4902F332216903711C539665A01E26A5643A0080B5099D47E7B0F30122CA
      AE002F6CA03E915F111AEA457055D437345845E38292344DA7522E7788816BFC
      CA397B01A487288A1A4389108F19D1CAB4B7887F888932CC0B5D38CFD4A69FD8
      7D06B391A289D45A3A574257F8904A5015AC0CA90CF9B02AC8F8A041966E90CD
      70E6FC133216BA12E627A0924875A80B7F015EE824C46D41B4299A75670756C7
      5188FB9C68BD470C5DE3EA50D31BE0D9EA13D465D482DAFC89C755915D49D3AA
      4A21FBEA64BF3B835C7733D36FB76B41F95916212688880541500BFA02ADEFB6
      806841C5C90000000049454E44AE426082}
    OnClick = ImageButtonCloseClick
    OnMouseEnter = ImageButtonCloseMouseEnter
    OnMouseLeave = ImageButtonCloseMouseLeave
    ExplicitLeft = 80
  end
  object ImageButtonMinimize: TImage
    Left = 1002
    Top = 0
    Width = 26
    Height = 26
    Align = alRight
    Picture.Data = {
      0954506E67496D61676589504E470D0A1A0A0000000D494844520000001A0000
      001A0806000000A94A4CCE000000BF4944415478DAEDD6610A85200C00E0ED1C
      EAFD0FE63DDACBBD262A2B32B7783FDE208C30BF4D11C5182301407910EC43C6
      25DCA1CD09E9C05721724638FED0732884C0102202919D29E395D6BDA229A8ED
      FC04AA157AAF9160AE15B57109D56CDE806690ABFE666BD42DBC829D4277AB69
      FBC9BB36E52A9473E6FFE0384B66DB94128E895A431C05BA35753BB4B46EBF05
      596DD053C872738EC1C99763C26B70499CA1F172625199B27937F516B48A0DD0
      F7603DA0FABD9BD7F529AD457C0021D495767C2C0E0E0000000049454E44AE42
      6082}
    OnClick = ImageButtonMinimizeClick
    OnMouseEnter = ImageButtonMinimizeMouseEnter
    OnMouseLeave = ImageButtonMinimizeMouseLeave
    ExplicitLeft = 0
    ExplicitHeight = 1280
  end
  object Image1: TImage
    Left = 1028
    Top = 0
    Width = 26
    Height = 26
    Align = alRight
    Picture.Data = {
      0954506E67496D61676589504E470D0A1A0A0000000D494844520000001A0000
      001A0806000000A94A4CCE000000BF4944415478DAEDD6610A85200C00E0ED1C
      EAFD0FE63DDACBBD262A2B32B7783FDE208C30BF4D11C5182301407910EC43C6
      25DCA1CD09E9C05721724638FED0732884C0102202919D29E395D6BDA229A8ED
      FC04AA157AAF9160AE15B57109D56CDE806690ABFE666BD42DBC829D4277AB69
      FBC9BB36E52A9473E6FFE0384B66DB94128E895A431C05BA35753BB4B46EBF05
      596DD053C872738EC1C99763C26B70499CA1F172625199B27937F516B48A0DD0
      F7603DA0FABD9BD7F529AD457C0021D495767C2C0E0E0000000049454E44AE42
      6082}
    OnClick = Image1Click
    OnMouseEnter = ImageButtonMinimizeMouseEnter
    OnMouseLeave = ImageButtonMinimizeMouseLeave
    ExplicitLeft = 1036
    ExplicitTop = 8
  end
  object ScrollBoxMainContainer: TScrollBox
    Left = 0
    Top = 26
    Width = 1080
    Height = 720
    HorzScrollBar.Color = clBtnText
    HorzScrollBar.ParentColor = False
    HorzScrollBar.Style = ssFlat
    HorzScrollBar.Visible = False
    VertScrollBar.Visible = False
    Align = alBottom
    BevelInner = bvNone
    BevelOuter = bvNone
    BorderStyle = bsNone
    Color = clBtnFace
    ParentColor = False
    TabOrder = 0
    inline FrameDetails: TFrameDetails
      Left = 1080
      Top = 0
      Width = 1080
      Height = 720
      HorzScrollBar.Color = clBackground
      HorzScrollBar.ParentColor = False
      Color = clBackground
      ParentBackground = False
      ParentColor = False
      TabOrder = 0
      ExplicitLeft = 1080
      inherited ImageButtonBack: TImage
        OnClick = FrameDetailsImageButtonBackClick
      end
    end
    inline FrameMain: TFrameMain
      Left = 0
      Top = -3
      Width = 1080
      Height = 720
      Color = clBackground
      ParentBackground = False
      ParentColor = False
      TabOrder = 1
      ExplicitTop = -3
      inherited PanelTable: TPanel
        Color = clBlack
        Font.Color = clWindow
        Font.Name = 'Segoe UI'
        inherited ImageTable: TImage
          OnClick = FrameMainImageTableClick
        end
      end
      inherited PanelReport: TPanel
        inherited ImageReport: TImage
          OnClick = FrameMainImageReportClick
        end
      end
      inherited PanelAbout: TPanel
        inherited ImageAbout: TImage
          OnClick = FrameMainImageAboutClick
        end
      end
    end
  end
  object PanelLineHide: TPanel
    Left = 0
    Top = 725
    Width = 1280
    Height = 25
    BevelOuter = bvNone
    TabOrder = 1
  end
  object PanelWindowControls: TPanel
    Left = 0
    Top = 0
    Width = 121
    Height = 26
    Margins.Left = 10
    Align = alLeft
    BevelOuter = bvNone
    Caption = #1055#1088#1086#1075#1088#1072#1084#1084#1072
    Color = -1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindow
    Font.Height = -20
    Font.Name = 'Segoe UI Semibold'
    Font.Style = []
    Font.Quality = fqClearType
    Padding.Left = 10
    ParentBackground = False
    ParentFont = False
    TabOrder = 2
    OnMouseDown = PanelWindowControlsMouseDown
  end
end
