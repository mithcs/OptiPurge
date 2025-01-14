#include <stdio.h>
#include <windows.h>
#define pf(x) printf(#x);
void ChangeConsoleWin();

int main()
{
    ChangeConsoleWin();
    pf(THIS IS OUTPUT)
    getchar();
    return 0;
}

void ChangeConsoleWin()
{
    // Get the handle to the console window
    HWND consoleWindow = GetConsoleWindow();

    // Show the console window in the maximized state
    ShowWindow(consoleWindow, SW_SHOWMAXIMIZED);

    // Get the handle to the console output buffer
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Define the font information
    CONSOLE_FONT_INFOEX fontInfo;
    fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    fontInfo.nFont = 0;
    fontInfo.dwFontSize.X = 11; // Width of the font
    fontInfo.dwFontSize.Y = 24; // Height of the font
    fontInfo.FontFamily = FF_DONTCARE;
    fontInfo.FontWeight = FW_NORMAL;
    wcsncpy_s(fontInfo.FaceName, LF_FACESIZE, L"Consolas", wcslen(L"Consolas"));

    // Changes the buffer size
    COORD bufferSize = {135, 800};
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    // Set the console font
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
}
