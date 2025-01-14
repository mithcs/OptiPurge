#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void helpMenu();

int main()
{
    system("chcp 65001");
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

    COORD bufferSize = {135, 800};  // Adjust the values as needed
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    // Set the console font
    SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);

    helpMenu();
    return 0;
}

void helpMenu()
{

    printf("\n NOTE: ALL THE LOGS AND OTHER FILES WILL BE SAVED AT C:\\OptiPurge\n");

    printf("\n %-15s %s", "Command", "Description");
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━");

    printf("\n %-15s %s", "about", "Display information about the utility, including the developer, version, credits, and acknowledgments.");
    printf("\n %-15s %s", "adisk", "Analyze and report on the status of the C drive");
    printf("\n %-15s %s", "autoc", "Automate the cleaning of temporary and prefetch files");
    printf("\n %-15s %s", "bopti", "Optimize system boot for faster startup | Not recommended for SSDs");
    printf("\n %-15s %s", "cbin", "Empty the recycle bin to free up disk space");
    printf("\n %-15s %s", "cdsk", "Conduct a comprehensive disk checkup utility");
    printf("\n %-15s %s", "cmgr", "Initiate the disk cleanup manager to free up space");
    printf("\n %-15s %s", "dfrag", "Execute defragmentation utility on the C drive | Not recommended for SSDs");
    printf("\n %-15s %s", "dipcfg", "Log detailed information about IP Configuration");
    printf("\n %-15s %s", "exit", "Exit OptiPurge application");
    printf("\n %-15s %s", "help", "Display the help menu for OptiPurge");
    printf("\n %-15s %s", "ipcfg", "Retrieve Windows IP Configuration details");
    printf("\n %-15s %s", "ocdsk", "Perform an online disk checkup utility");
    printf("\n %-15s %s", "opt", "Optimize the C drive for improved efficiency | Recommended for SSDs");
    printf("\n %-15s %s", "pref", "Clear prefetch files to enhance system performance");
    printf("\n %-15s %s", "sffix", "Scan and automatically fix issues with system files");
    printf("\n %-15s %s", "sfan", "Verify the integrity of system files");
    printf("\n %-15s %s", "schlg", "Log all scheduled tasks for reference");
    printf("\n %-15s %s", "sinfo", "Log detailed system information for reference");
    printf("\n %-15s %s", "temp", "Remove temporary files from the system");
    printf("\n %-15s %s", "wvers", "Obtain information about the Windows version\n");
}
