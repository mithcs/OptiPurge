#include <windows.h>
#include <stdio.h>
#define print(x) printf(#x)

void ResetConsoleWinToDefault();

int main()
{
    ResetConsoleWinToDefault();
    print(THIS IS OUTPUT);
    getchar();
    return 0;
}


void ResetConsoleWinToDefault() {
    // Get the handle to the console window
    HWND consoleWindow = GetConsoleWindow();

    // Show the console window in the normal state
    ShowWindow(consoleWindow, SW_SHOWMAXIMIZED);

    // Get the handle to the console output buffer
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Changes the buffer size to default
    COORD bufferSize = {135, 9001}; // Use the default width and height
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    // Set the console font to default
    CONSOLE_FONT_INFOEX fontInfo;
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    fontInfo.nFont = 0;
    fontInfo.dwFontSize.X = 11; // Set to 0 for default width
    fontInfo.dwFontSize.Y = 24; // Set to 0 for default height
    fontInfo.FontFamily = FF_DONTCARE;
    fontInfo.FontWeight = FW_NORMAL;
    wcsncpy_s(fontInfo.FaceName, LF_FACESIZE, L"Consolas", wcslen(L"Consolas"));
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);

    // Retrieve the default window size
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    // Set the console window size to default
    SMALL_RECT sr;
    sr.Left = 0;
    sr.Top = 0;
    sr.Right = csbi.dwSize.X - 1;
    sr.Bottom = csbi.dwSize.Y - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &sr);
}
