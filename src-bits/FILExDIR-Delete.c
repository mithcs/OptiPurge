#include <stdio.h>
#include <windows.h>
#include <string.h>

void clearfolder (char filepath[]);
int main()
{
    char folderpath[MAX_PATH] = "F:\\tempo";
   clearfolder(folderpath);
   return 0;
}

void clearfolder (char folderpath[])
{
     WIN32_FIND_DATA findfiledata;

    char searchpath[MAX_PATH];
    HANDLE hfind;

    snprintf(searchpath, sizeof(searchpath), "%s\\*.*", folderpath);
    hfind = FindFirstFile(searchpath, &findfiledata);

    do
    {

        if (strcmp(findfiledata.cFileName, ".") == 0 || strcmp(findfiledata.cFileName, "..") == 0)
            continue;

        char filepath[MAX_PATH];
        snprintf(filepath, sizeof(filepath), "%s\\%s", folderpath, findfiledata.cFileName);

        if (findfiledata.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
            clearfolder(filepath);
        else
            DeleteFile(filepath);
    } while (FindNextFile(hfind, &findfiledata) != 0);

    FindClose(hfind);

    RemoveDirectory(folderpath);
}
