#include <stdio.h>
#include <windows.h>

void ChangeConsoleWin();

int main() {
    ChangeConsoleWin();
    int i;
    for (i = 0; i < 40; i++)
        printf("%d HI\n", i);
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


    // Set the console font
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
}
