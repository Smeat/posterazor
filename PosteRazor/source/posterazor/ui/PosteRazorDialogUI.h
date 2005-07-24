// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef PosteRazorDialogUI_h
#define PosteRazorDialogUI_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Wizard.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Value_Input.H>

class PosteRazorDialogUI : public Fl_Double_Window {
  void _PosteRazorDialogUI();
public:
  PosteRazorDialogUI(int X, int Y, int W, int H, const char *L = 0);
  PosteRazorDialogUI(int W, int H, const char *L = 0);
  Fl_Button *m_nextButton;
private:
  void cb_m_nextButton_i(Fl_Button*, void*);
  static void cb_m_nextButton(Fl_Button*, void*);
public:
  Fl_Button *m_prevButton;
private:
  void cb_m_prevButton_i(Fl_Button*, void*);
  static void cb_m_prevButton(Fl_Button*, void*);
public:
  Fl_Wizard *m_wizard;
  Fl_Group *m_loadInputImageStep;
private:
  void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
public:
  Fl_Box *m_inputFileNameLabel;
  Fl_Group *m_pageSizeStep;
  Fl_Round_Button *m_standardPageSizeRadioButton;
private:
  void cb_m_standardPageSizeRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_standardPageSizeRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Group *m_standardPageSizeGroup;
  Fl_Value_Input *m_pageBorderTop;
private:
  void cb_m_pageBorderTop_i(Fl_Value_Input*, void*);
  static void cb_m_pageBorderTop(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_pageBorderRight;
private:
  void cb_m_pageBorderRight_i(Fl_Value_Input*, void*);
  static void cb_m_pageBorderRight(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_pageBorderBottom;
private:
  void cb_m_pageBorderBottom_i(Fl_Value_Input*, void*);
  static void cb_m_pageBorderBottom(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_pageBorderLeft;
private:
  void cb_m_pageBorderLeft_i(Fl_Value_Input*, void*);
  static void cb_m_pageBorderLeft(Fl_Value_Input*, void*);
public:
  Fl_Round_Button *m_customPageSizeRadioButton;
private:
  void cb_m_customPageSizeRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_customPageSizeRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Group *m_customPageSizeGroup;
  Fl_Value_Input *m_pageCustomWidthInput;
private:
  void cb_m_pageCustomWidthInput_i(Fl_Value_Input*, void*);
  static void cb_m_pageCustomWidthInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_pageCustomHeightInput;
private:
  void cb_m_pageCustomHeightInput_i(Fl_Value_Input*, void*);
  static void cb_m_pageCustomHeightInput(Fl_Value_Input*, void*);
public:
  Fl_Box *m_pageCustomWidthLabel;
  Fl_Box *m_pageCustomHeightLabel;
  Fl_Group *m_posterSizeStep;
  Fl_Value_Input *m_posterAbsoluteWidthInput;
private:
  void cb_m_posterAbsoluteWidthInput_i(Fl_Value_Input*, void*);
  static void cb_m_posterAbsoluteWidthInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_posterAbsoluteHeightInput;
private:
  void cb_m_posterAbsoluteHeightInput_i(Fl_Value_Input*, void*);
  static void cb_m_posterAbsoluteHeightInput(Fl_Value_Input*, void*);
public:
  Fl_Box *m_posterAbsoluteWidthLabel;
  Fl_Box *m_posterAbsoluteHeightLabel;
  Fl_Value_Input *m_posterPagesWidthInput;
private:
  void cb_m_posterPagesWidthInput_i(Fl_Value_Input*, void*);
  static void cb_m_posterPagesWidthInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_posterPagesHeightInput;
private:
  void cb_m_posterPagesHeightInput_i(Fl_Value_Input*, void*);
  static void cb_m_posterPagesHeightInput(Fl_Value_Input*, void*);
public:
  Fl_Box *m_posterPagesWidthLabel;
  Fl_Box *m_posterPagesHeightLabel;
  Fl_Value_Input *m_posterPercentualSizeInput;
private:
  void cb_m_posterPercentualSizeInput_i(Fl_Value_Input*, void*);
  static void cb_m_posterPercentualSizeInput(Fl_Value_Input*, void*);
public:
  Fl_Box *m_posterPercentualWidthLabel;
  Fl_Group *m_savePosterStep;
  Fl_Group *m_previewImageGroup;
  virtual void next(void) = 0;
  virtual void prev(void) = 0;
  virtual void UpdateNavigationButtons(void) = 0;
  virtual void LoadInputImage(void) = 0;
  virtual void UpdatePreviewImage(void) = 0;
  virtual void SetPageSizeFields(void) = 0;
  virtual void UpdatePageSizeFields(void) = 0;
  virtual void UpdatePosterSizeFields(Fl_Valuator* sourceWidget) = 0;
};
#endif
