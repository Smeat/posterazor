// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef PosteRazorDialogUI_h
#define PosteRazorDialogUI_h
#include <FL/Fl.H>
#include "Fl_Paint_Canvas.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Wizard.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Round_Button.H>
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
  Fl_Group *m_imageInfoGroup;
  Fl_Box *m_imageInfoValuesLabel;
  Fl_Box *m_imageInfoKeysLabel;
  Fl_Group *m_paperSizeStep;
  Fl_Tabs *m_paperFormatTypeTabs;
private:
  void cb_m_paperFormatTypeTabs_i(Fl_Tabs*, void*);
  static void cb_m_paperFormatTypeTabs(Fl_Tabs*, void*);
public:
  Fl_Group *m_paperFormatStandardGroup;
  Fl_Choice *m_paperFormatChoice;
  Fl_Round_Button *m_paperOrientationPortraitRadioButton;
private:
  void cb_m_paperOrientationPortraitRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_paperOrientationPortraitRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Round_Button *m_paperOrientationLandscapeRadioButton;
private:
  void cb_m_paperOrientationLandscapeRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_paperOrientationLandscapeRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Value_Input *m_paperBorderTopInput;
private:
  void cb_m_paperBorderTopInput_i(Fl_Value_Input*, void*);
  static void cb_m_paperBorderTopInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_paperBorderRightInput;
private:
  void cb_m_paperBorderRightInput_i(Fl_Value_Input*, void*);
  static void cb_m_paperBorderRightInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_paperBorderBottomInput;
private:
  void cb_m_paperBorderBottomInput_i(Fl_Value_Input*, void*);
  static void cb_m_paperBorderBottomInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_paperBorderLeftInput;
private:
  void cb_m_paperBorderLeftInput_i(Fl_Value_Input*, void*);
  static void cb_m_paperBorderLeftInput(Fl_Value_Input*, void*);
public:
  Fl_Group *m_paperFormatCustomGroup;
  Fl_Value_Input *m_paperCustomWidthInput;
private:
  void cb_m_paperCustomWidthInput_i(Fl_Value_Input*, void*);
  static void cb_m_paperCustomWidthInput(Fl_Value_Input*, void*);
public:
  Fl_Value_Input *m_paperCustomHeightInput;
private:
  void cb_m_paperCustomHeightInput_i(Fl_Value_Input*, void*);
  static void cb_m_paperCustomHeightInput(Fl_Value_Input*, void*);
public:
  Fl_Box *m_paperCustomWidthLabel;
  Fl_Box *m_paperCustomHeightLabel;
  Fl_Group *m_posterSizeStep;
  Fl_Round_Button *m_posterSizeAbsoluteRadioButton;
private:
  void cb_m_posterSizeAbsoluteRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_posterSizeAbsoluteRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Group *m_posterSizeAbsoluteGroup;
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
  Fl_Round_Button *m_posterSizeInPagesRadioButton;
private:
  void cb_m_posterSizeInPagesRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_posterSizeInPagesRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Group *m_posterSizeInPagesGroup;
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
  Fl_Round_Button *m_posterSizePercentualRadioButton;
private:
  void cb_m_posterSizePercentualRadioButton_i(Fl_Round_Button*, void*);
  static void cb_m_posterSizePercentualRadioButton(Fl_Round_Button*, void*);
public:
  Fl_Group *m_posterSizePercentualGroup;
  Fl_Value_Input *m_posterPercentualSizeInput;
private:
  void cb_m_posterPercentualSizeInput_i(Fl_Value_Input*, void*);
  static void cb_m_posterPercentualSizeInput(Fl_Value_Input*, void*);
public:
  Fl_Box *m_posterPercentualWidthLabel;
  Fl_Group *m_savePosterStep;
  Fl_Paint_Canvas *m_previewPaintCanvas;
  Fl_Box *m_stepInfoBox;
  virtual void next(void) = 0;
  virtual void prev(void) = 0;
  virtual void UpdateNavigationButtons(void) = 0;
  virtual void LoadInputImage(void) = 0;
  virtual void SetPaperSizeFields(void) = 0;
  virtual void HandlePaperSizeChangement(void) = 0;
  virtual void UpdatePosterSizeGroupsState(void) = 0;
  virtual void UpdatePosterSizeFields(Fl_Valuator* sourceWidget) = 0;
};
#endif
