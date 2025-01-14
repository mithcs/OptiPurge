#include <windows.h>
#include <shlobj.h>
#include <conio.h>
#include <stdio.h>
int main()
{
    char szPATH[MAX_PATH];
    HINSTANCE hInstance;
    GetModuleFileName(NULL, szPATH, MAX_PATH);

    if(IsUserAnAdmin() == FALSE)
    {
        printf("The user is not admin.\n");
        hInstance = ShellExecuteA(NULL, "runas", szPATH, NULL, NULL, SW_MAXIMIZE);
        if(hInstance <= HINSTANCE_ERROR)
        {
            printf("Error, the needed permissions are denied.\nPress any key to exit!\n");
            return(1);
        }
        printf("\n\nclosinggg!\n");
        return 0;

    }
    printf("Hi!");
    _getch();
    return 0;
}
