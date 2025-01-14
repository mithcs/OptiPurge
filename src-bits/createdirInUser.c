#include <stdio.h>
#include <windows.h>

int main()
{
    char path[MAX_PATH];
    if (ExpandEnvironmentStringsA("%localappdata%\\files", path, MAX_PATH) == 0)
        fprintf(stderr, "%d", GetLastError());
    if (!CreateDirectoryA(path, NULL))
        fprintf(stderr, "%d", GetLastError());
    return 0;
}
