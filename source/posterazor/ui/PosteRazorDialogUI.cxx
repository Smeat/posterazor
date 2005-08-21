// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include "PosteRazorDialogUI.h"

void PosteRazorDialogUI::cb_m_nextButton_i(Fl_Button*, void*) {
  next();
}
void PosteRazorDialogUI::cb_m_nextButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_nextButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_prevButton_i(Fl_Button*, void*) {
  prev();
}
void PosteRazorDialogUI::cb_m_prevButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_prevButton_i(o,v);
}

void PosteRazorDialogUI::cb__i(Fl_Button*, void*) {
  LoadInputImage();
}
void PosteRazorDialogUI::cb_(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb__i(o,v);
}

void PosteRazorDialogUI::cb_m_paperFormatTypeTabs_i(Fl_Tabs*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperFormatTypeTabs(Fl_Tabs* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_paperFormatTypeTabs_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperOrientationPortraitRadioButton_i(Fl_Round_Button*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperOrientationPortraitRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperOrientationPortraitRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperOrientationLandscapeRadioButton_i(Fl_Round_Button*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperOrientationLandscapeRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperOrientationLandscapeRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderStandardTopInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderStandardTopInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderStandardTopInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderStandardRightInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderStandardRightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderStandardRightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderStandardBottomInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderStandardBottomInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderStandardBottomInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperBorderStandardLeftInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperBorderStandardLeftInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperBorderStandardLeftInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperCustomWidthInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperCustomWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperCustomWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_paperCustomHeightInput_i(Fl_Value_Input*, void*) {
  HandlePaperSizeChangement();
}
void PosteRazorDialogUI::cb_m_paperCustomHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_paperCustomHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizeAbsoluteRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizeAbsoluteRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizeAbsoluteRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteWidthInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteHeightInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizeInPagesRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizeInPagesRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizeInPagesRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesWidthInput);
}
void PosteRazorDialogUI::cb_m_posterPagesWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesHeightInput);
}
void PosteRazorDialogUI::cb_m_posterPagesHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizePercentualRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizePercentualRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizePercentualRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPercentualSizeInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPercentualSizeInput);
}
void PosteRazorDialogUI::cb_m_posterPercentualSizeInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPercentualSizeInput_i(o,v);
}
PosteRazorDialogUI::PosteRazorDialogUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _PosteRazorDialogUI();
}

PosteRazorDialogUI::PosteRazorDialogUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _PosteRazorDialogUI();
}

void PosteRazorDialogUI::_PosteRazorDialogUI() {
  PosteRazorDialogUI *w = this;
  PosteRazorDialogUI *o = this;
o->box(FL_FLAT_BOX);
o->color(FL_BACKGROUND_COLOR);
o->selection_color(FL_BACKGROUND_COLOR);
o->labeltype(FL_NORMAL_LABEL);
o->labelfont(0);
o->labelsize(14);
o->labelcolor(FL_BLACK);
o->user_data((void*)(this));
o->align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE);
o->when(FL_WHEN_RELEASE);
{ Fl_Group* o = new Fl_Group(10, 420, 600, 25);
  { Fl_Button* o = m_nextButton = new Fl_Button(525, 420, 85, 25, "Next @-2->");
    o->callback((Fl_Callback*)cb_m_nextButton);
  }
  { Fl_Button* o = m_prevButton = new Fl_Button(430, 420, 85, 25, "@-2<- Back");
    o->callback((Fl_Callback*)cb_m_prevButton);
  }
  { Fl_Box* o = new Fl_Box(225, 420, 15, 25);
    Fl_Group::current()->resizable(o);
  }
  o->end();
}
{ Fl_Wizard* o = m_wizard = new Fl_Wizard(315, 45, 295, 365);
  o->box(FL_THIN_DOWN_BOX);
  o->user_data((void*)(this));
  { Fl_Group* o = m_loadInputImageStep = new Fl_Group(315, 45, 295, 365);
    o->color(FL_LIGHT1);
    o->hide();
    { Fl_Group* o = new Fl_Group(325, 70, 275, 25, "Input Image");
      { Fl_Button* o = new Fl_Button(575, 70, 25, 25, "...");
        o->callback((Fl_Callback*)cb_);
      }
      { Fl_Box* o = m_inputFileNameLabel = new Fl_Box(325, 70, 250, 25);
        o->box(FL_THIN_DOWN_BOX);
        o->color((Fl_Color)55);
        o->align(68|FL_ALIGN_INSIDE);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Group* o = m_imageInfoGroup = new Fl_Group(325, 120, 275, 85, "Image information");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      { Fl_Box* o = m_imageInfoValuesLabel = new Fl_Box(460, 130, 135, 65);
        o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_imageInfoKeysLabel = new Fl_Box(335, 130, 125, 65);
        o->align(FL_ALIGN_TOP_RIGHT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(315, 410, 295, 0);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_paperSizeStep = new Fl_Group(315, 45, 295, 365);
    { Fl_Tabs* o = m_paperFormatTypeTabs = new Fl_Tabs(325, 55, 275, 285);
      o->callback((Fl_Callback*)cb_m_paperFormatTypeTabs);
      o->align(FL_ALIGN_CENTER);
      { Fl_Group* o = m_paperFormatStandardGroup = new Fl_Group(325, 80, 275, 260, "Standard");
        o->box(FL_THIN_UP_BOX);
        o->color(FL_DARK2);
        o->selection_color((Fl_Color)40);
        { Fl_Choice* o = m_paperFormatChoice = new Fl_Choice(425, 90, 165, 25, "Format:");
          o->down_box(FL_BORDER_BOX);
        }
        { Fl_Group* o = new Fl_Group(425, 125, 165, 60, "Orientation:");
          o->box(FL_THIN_DOWN_BOX);
          o->color((Fl_Color)43);
          o->align(FL_ALIGN_LEFT);
          { Fl_Round_Button* o = m_paperOrientationPortraitRadioButton = new Fl_Round_Button(460, 130, 125, 25, "Portrait");
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)cb_m_paperOrientationPortraitRadioButton);
          }
          { Fl_Round_Button* o = m_paperOrientationLandscapeRadioButton = new Fl_Round_Button(460, 155, 125, 25, "Landscape");
            o->type(102);
            o->down_box(FL_ROUND_DOWN_BOX);
            o->callback((Fl_Callback*)cb_m_paperOrientationLandscapeRadioButton);
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(425, 195, 165, 135, "Borders:");
          o->box(FL_THIN_DOWN_BOX);
          o->color((Fl_Color)43);
          o->align(FL_ALIGN_LEFT);
          { Fl_Value_Input* o = m_paperBorderStandardTopInput = new Fl_Value_Input(485, 220, 50, 25, "Top");
            o->maximum(999);
            o->step(0.1);
            o->callback((Fl_Callback*)cb_m_paperBorderStandardTopInput);
            o->align(FL_ALIGN_TOP);
            o->precision(2);
          }
          { Fl_Value_Input* o = m_paperBorderStandardRightInput = new Fl_Value_Input(530, 250, 50, 25, "Right");
            o->maximum(999);
            o->step(0.1);
            o->callback((Fl_Callback*)cb_m_paperBorderStandardRightInput);
            o->align(FL_ALIGN_TOP_RIGHT);
            o->precision(2);
          }
          { Fl_Value_Input* o = m_paperBorderStandardBottomInput = new Fl_Value_Input(485, 280, 50, 25, "Bottom");
            o->maximum(999);
            o->step(0.1);
            o->callback((Fl_Callback*)cb_m_paperBorderStandardBottomInput);
            o->align(FL_ALIGN_BOTTOM);
            o->precision(2);
          }
          { Fl_Value_Input* o = m_paperBorderStandardLeftInput = new Fl_Value_Input(440, 250, 50, 25, "Left");
            o->maximum(999);
            o->step(0.1);
            o->callback((Fl_Callback*)cb_m_paperBorderStandardLeftInput);
            o->align(FL_ALIGN_TOP_LEFT);
            o->precision(2);
          }
          o->end();
        }
        o->end();
      }
      { Fl_Group* o = m_paperFormatCustomGroup = new Fl_Group(325, 80, 275, 260, "Custom");
        o->box(FL_THIN_UP_BOX);
        o->color(FL_DARK2);
        o->selection_color((Fl_Color)40);
        o->hide();
        { Fl_Value_Input* o = m_paperCustomWidthInput = new Fl_Value_Input(425, 90, 95, 25, "Width:");
          o->callback((Fl_Callback*)cb_m_paperCustomWidthInput);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Value_Input* o = m_paperCustomHeightInput = new Fl_Value_Input(425, 125, 95, 25, "Height:");
          o->callback((Fl_Callback*)cb_m_paperCustomHeightInput);
          Fl_Group::current()->resizable(o);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Box* o = m_paperCustomWidthLabel = new Fl_Box(520, 90, 50, 25, "cm");
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        { Fl_Box* o = m_paperCustomHeightLabel = new Fl_Box(520, 125, 50, 25, "cm");
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        }
        o->end();
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(315, 400, 295, 10);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_posterSizeStep = new Fl_Group(315, 45, 295, 365);
    o->hide();
    { Fl_Round_Button* o = m_posterSizeAbsoluteRadioButton = new Fl_Round_Button(325, 52, 275, 20, "Absolute image size");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizeAbsoluteRadioButton);
    }
    { Fl_Group* o = m_posterSizeAbsoluteGroup = new Fl_Group(325, 70, 275, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      o->align(FL_ALIGN_CENTER);
      { Fl_Value_Input* o = m_posterAbsoluteWidthInput = new Fl_Value_Input(430, 80, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteWidthInput);
        o->step(1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterAbsoluteHeightInput = new Fl_Value_Input(430, 110, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterAbsoluteWidthLabel = new Fl_Box(520, 80, 70, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterAbsoluteHeightLabel = new Fl_Box(520, 110, 70, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Round_Button* o = m_posterSizeInPagesRadioButton = new Fl_Round_Button(325, 152, 275, 20, "Size in pages");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizeInPagesRadioButton);
    }
    { Fl_Group* o = m_posterSizeInPagesGroup = new Fl_Group(325, 170, 275, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPagesWidthInput = new Fl_Value_Input(430, 180, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_posterPagesWidthInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterPagesHeightInput = new Fl_Value_Input(430, 210, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_posterPagesHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPagesWidthLabel = new Fl_Box(520, 180, 70, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterPagesHeightLabel = new Fl_Box(520, 210, 70, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Round_Button* o = m_posterSizePercentualRadioButton = new Fl_Round_Button(325, 252, 275, 20, "Image size in percent");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizePercentualRadioButton);
    }
    { Fl_Group* o = m_posterSizePercentualGroup = new Fl_Group(325, 270, 275, 45);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPercentualSizeInput = new Fl_Value_Input(430, 280, 90, 25, "Size:");
        o->callback((Fl_Callback*)cb_m_posterPercentualSizeInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPercentualWidthLabel = new Fl_Box(520, 280, 70, 25, "%");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(315, 410, 295, 0);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = new Fl_Group(315, 45, 295, 365);
    o->hide();
    o->end();
  }
  { Fl_Group* o = m_savePosterStep = new Fl_Group(315, 45, 295, 365);
    o->hide();
    o->end();
  }
  o->end();
}
{ Fl_Paint_Canvas* o = m_previewPaintCanvas = new Fl_Paint_Canvas(10, 45, 300, 365);
  o->box(FL_THIN_DOWN_BOX);
  o->color((Fl_Color)35);
  o->selection_color(FL_BACKGROUND_COLOR);
  o->labeltype(FL_NORMAL_LABEL);
  o->labelfont(0);
  o->labelsize(14);
  o->labelcolor(FL_BLACK);
  o->align(FL_ALIGN_CENTER);
  o->when(FL_WHEN_RELEASE);
  Fl_Group::current()->resizable(o);
}
{ Fl_Group* o = new Fl_Group(10, 10, 600, 25);
  { Fl_Box* o = m_stepInfoBox = new Fl_Box(10, 10, 570, 25, "Step 1 of 8: Load an image");
    o->box(FL_THIN_UP_BOX);
    o->color((Fl_Color)10);
    o->labelfont(1);
    o->labelsize(15);
    o->labelcolor(FL_GRAY0);
    Fl_Group::current()->resizable(o);
  }
  { Fl_Button* o = new Fl_Button(585, 10, 25, 25, "?");
    o->color((Fl_Color)10);
    o->labelfont(1);
    o->labelsize(15);
  }
  o->end();
}
// ****** Load input image step:
// ****** Paper size step:
// ****** Poster size step:
size_range(this->w(), this->h());
end();
}
