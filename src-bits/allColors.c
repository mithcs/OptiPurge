// ALL COLORS

#include <stdio.h>
#include <windows.h>

void setColor(int iColor);

void setColor(int iColor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
}

int main()
{
    int i;

    for (i = 0; i < 16; i++)
    {
        setColor(i);
        printf("Hello\n");
    }

    return 0;
}
