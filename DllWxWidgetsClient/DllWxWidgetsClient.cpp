#include <wx/wx.h>
#include "Header.h" // Include your custom header that contains MainApp and MainFrame declarations

wxIMPLEMENT_APP(MainApp);

bool MainApp::OnInit()
{
    MainFrame* MainWin = new MainFrame(_("Hello World!"), wxDefaultPosition, wxSize(300, 200));
    MainWin->Show(true);
    SetTopWindow(MainWin);
    return true;
}

int main(int argc, char* argv[])
{
    wxApp::SetInstance(new MainApp); // Create an instance of your custom application class
    wxEntryStart(argc, argv);
    wxTheApp->OnInit(); // Call your OnInit function
    wxTheApp->OnRun(); // Start the main loop

    return 0;
}