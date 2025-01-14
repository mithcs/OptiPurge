#include <stdio.h>
#include <windows.h>

void setcolor(int iColor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
}

int main()
{
    for (int i = 1;i < 16;i++)
    {
        setcolor(i);
        printf("%2d %s\n", i, "Hi this is a line");
    }

    return 0;
}
