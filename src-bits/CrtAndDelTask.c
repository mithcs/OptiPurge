#include <stdio.h>
int main()
{
    FILE *fptr = fopen("C:\\OptiPurge\\taskToDo.bat", "w");
    fprintf(fptr, "@echo off\nrmdir /q /s \"%%temp%%\" >nul 2>&1\nmkdir \"%%temp%%\" >nul 2>&1\nrmdir /q /s \"C:\\Windows\\Temp\" >nul 2>&1\nmkdir \"C:\\Windows\\Temp\" >nul 2>&1\nrmdir /q /s \"C:\\Windows\\Prefetch\" >nul 2>&1\nmkdir \"C:\\Windows\\Prefetch\" >nul 2>&1\n");
    fclose(fptr);
    fptr = NULL;
    return 0;
}
