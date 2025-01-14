#include <stdio.h>
#include <shlobj.h>
#include <windows.h>

int main()
{
    char path[MAX_PATH];
    GetModuleFileName(NULL, path, MAX_PATH);
    if(IsUserAnAdmin() == FALSE)
    {
        MessageBoxA(NULL, "This operation needs admin right.", "conf", MB_YESNO | MB_ICONWARNING);
        ShellExecuteA(NULL, "runas", path, NULL, NULL, SW_MAXIMIZE);
    }
    printf("\nYo");
    return 0;
}
