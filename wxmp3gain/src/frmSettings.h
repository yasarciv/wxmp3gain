/*
 * This file is part of the wxMP3gain and licensed under the GNU General Public License, version 3
 * http://www.gnu.org/licenses/gpl-3.0.html
 */

#ifndef FRMSETTINGS_H
#define FRMSETTINGS_H

#include "ConfigBase.h"

//(*Headers(frmSettings)
#include <wx/checkbox.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/radiobut.h>
#include <wx/filedlg.h>
#include <wx/panel.h>
#include <wx/slider.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
//*)

class frmSettings : public wxDialog
{
public:

    frmSettings(wxWindow* parent, ConfigBase* configBase, wxWindowID id = wxID_ANY);
    virtual ~frmSettings();

    //(*Declarations(frmSettings)
    wxCheckBox* chkForceInput;
    wxPanel* Panel1;
    wxPanel* Panel6;
    wxStaticText* lblConstantGain;
    wxChoice* chcFileWriting;
    wxRadioButton* optTagSKIP;
    wxCheckBox* chkTagFORCE;
    wxCheckBox* chkPreserveTime;
    wxRadioButton* optLeftChannel;
    wxPanel* Panel2;
    wxRadioButton* optRightChannel;
    wxTextCtrl* txtToolExecutable;
    wxFileDialog* FileDialog1;
    wxPanel* Panel3;
    wxSlider* sldConstantGain;
    wxRadioButton* optTagID3;
    wxRadioButton* optTagAPE;
    wxStaticText* StaticText4;
    wxStaticText* StaticText2;
    wxRadioButton* optBothChannel;
    wxNotebook* Notebook1;
    wxButton* btnOK;
    wxButton* btnCancel;
    wxCheckBox* chkAutoLower;
    wxCheckBox* chkConstantGain;
    wxButton* btnDefault;
    wxButton* btnToolExecutable;
    //*)

protected:

    //(*Identifiers(frmSettings)
    static const long ID_CHECKBOX3;
    static const long ID_TEXTCTRL2;
    static const long ID_BUTTON5;
    static const long ID_PANEL6;
    static const long ID_RADIOBUTTON4;
    static const long ID_RADIOBUTTON5;
    static const long ID_RADIOBUTTON6;
    static const long ID_CHECKBOX2;
    static const long ID_PANEL1;
    static const long ID_CHECKBOX1;
    static const long ID_STATICTEXT2;
    static const long ID_SLIDER1;
    static const long ID_STATICTEXT1;
    static const long ID_RADIOBUTTON2;
    static const long ID_RADIOBUTTON3;
    static const long ID_RADIOBUTTON1;
    static const long ID_PANEL3;
    static const long ID_STATICTEXT4;
    static const long ID_CHOICE4;
    static const long ID_CHECKBOX5;
    static const long ID_CHECKBOX6;
    static const long ID_PANEL2;
    static const long ID_NOTEBOOK1;
    static const long ID_BUTTON1;
    static const long ID_BUTTON2;
    static const long ID_BUTTON4;
    //*)

private:

    //(*Handlers(frmSettings)
    void OnbtnOKClick(wxCommandEvent& event);
    void OnbtnCancelClick(wxCommandEvent& event);
    void OnbtnDefaultClick(wxCommandEvent& event);
    void OnbtnToolExecutableClick(wxCommandEvent& event);
    void OnNotebook1PageChanged(wxNotebookEvent& event);
    void updateDisabledControlsEvent(wxCommandEvent& event);
    void OnsldConstantGainCmdSliderUpdated(wxScrollEvent& event);
    //*)

    void updateDisabledControls();
    void updateValueControls();
    void defaultValueControls();
    void saveValuesConfig();
    void setLabelsControls();

    ConfigBase* configBase;
    DECLARE_EVENT_TABLE()
};

#endif
