/*
	PosteRazor - Make your own poster!
	Copyright (C) 2005-2006 by Alessandro Portale
	http://posterazor.sourceforge.net/

	This file is part of PosteRazor

	PosteRazor is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	
	PosteRazor is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with PosteRazor; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include "Fl_PosteRazor_Spinner.h"
#include <FL/Fl_Input.H>
#include <FL/Fl_Repeat_Button.H>
#include <stdio.h>
#include <math.h>

#define REPEATBUTTONWIDTH 15

Fl_PosteRazor_Spinner::Fl_PosteRazor_Spinner(int x, int y, int width, int height, const char* label)
	:Fl_Group(x, y, width, height, label)
{
	begin();
	m_input = new Fl_Input(1, 1, 1, 1);
	m_input->type(FL_FLOAT_INPUT);
	m_input->value("1");
	m_input->callback((Fl_Callback*)handleValueChangement_cb, this);
	m_input->when(FL_WHEN_CHANGED);

	m_spinnerVisible = true;

	m_increaseButton = new Fl_Repeat_Button(1, 1, 1, 1);
	m_increaseButton->label("+");
	m_increaseButton->labelsize(11);
	m_increaseButton->labelfont(FL_COURIER_BOLD);
	m_increaseButton->box(FL_THIN_UP_BOX);
	m_increaseButton->callback((Fl_Callback*)handleButtonPress_cb, this);

	m_decreaseButton = new Fl_Repeat_Button(1, 1, 1, 1);
	m_decreaseButton->label("-");
	m_decreaseButton->labelsize(11);
	m_decreaseButton->labelfont(FL_COURIER_BOLD);
	m_decreaseButton->box(FL_THIN_UP_BOX);
	m_decreaseButton->callback((Fl_Callback*)handleButtonPress_cb, this);

	setSpinnerVisible(false);

	UpdateButtonsState();

	end();
}

const char* Fl_PosteRazor_Spinner::quickNDirtyDoubleToString(double value)
{
	static char valueString[200];
	sprintf(valueString, "%G", Round(value, 4));
	return valueString;
}

// "Round()" from http://www.c-plusplus.de/forum/viewtopic-var-t-is-39342.html
double Fl_PosteRazor_Spinner::Round(double Zahl, int Stellen)
{
    return floor(Zahl * pow( 10, Stellen) + 0.5) * pow(10, -Stellen);
} 

void Fl_PosteRazor_Spinner::setSpinnerVisible(bool visible)
{
	m_spinnerVisible = visible;

	if (m_spinnerVisible)
	{
		int repeatButtonHeight = (int)((float)h()/2);
		m_increaseButton->resize(x() + w() - REPEATBUTTONWIDTH, y(), REPEATBUTTONWIDTH, repeatButtonHeight);
		m_decreaseButton->resize(x() + w() - REPEATBUTTONWIDTH, y() + h() - repeatButtonHeight, REPEATBUTTONWIDTH, repeatButtonHeight);
		m_increaseButton->show();
		m_decreaseButton->show();
		m_input->resize(x(), y(), w() - REPEATBUTTONWIDTH, h());
	}
	else
	{
		m_input->resize(x(), y(), w(), h());
		m_increaseButton->hide();
		m_decreaseButton->hide();
	}
}

void Fl_PosteRazor_Spinner::UpdateButtonsState(void)
{
	if (value() - 1.0 <= 0.0)
		m_decreaseButton->deactivate();
	else
		m_decreaseButton->activate();
}

void Fl_PosteRazor_Spinner::handleButtonPress_cb(Fl_Repeat_Button *button, void *data)
{
	((Fl_PosteRazor_Spinner*)(data))->handleButtonPress(button);
}

void Fl_PosteRazor_Spinner::handleButtonPress(Fl_Repeat_Button *button)
{
	double increaseValue = button==m_increaseButton?.5:-.50001;
	double oldValue = value();
	double newValue = Round(oldValue + increaseValue, 0);
	if (newValue >= 1.0)
		value(newValue);
	UpdateButtonsState();
	do_callback();
}

void Fl_PosteRazor_Spinner::handleValueChangement_cb(Fl_Input *input, void *data)
{
	((Fl_PosteRazor_Spinner*)(data))->handleValueChangement(input);
}

void Fl_PosteRazor_Spinner::handleValueChangement(Fl_Input *input)
{
	UpdateButtonsState();
	do_callback();
}

double Fl_PosteRazor_Spinner::value()
{
	return atof(m_input->value());
}

void Fl_PosteRazor_Spinner::value(double value)
{
	m_input->value(quickNDirtyDoubleToString(value));
	UpdateButtonsState();
}
