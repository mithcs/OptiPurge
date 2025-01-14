#include <stdio.h>
#include <windows.h>


void setColor(int iColor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), iColor);
}



int main() {
    setColor(14);
    printf("         ,....,   \n");
    printf("      ,::::::<     \n");
    printf("     ,::/^\"``.       ");
    setColor(6);
    printf("<-  This Is Dreyfus The Knight\n");
    setColor(14);
    printf("    ,::/, `   e`.                   ");
    setColor(6);
    printf("Dreyfus says: Welcome %s \n");
    setColor(14);
    printf("   ,::; |        '.  \n");
    printf("   ,::|  \\___,-.  c)               ");
    setColor(11);
    printf("%s\n", " __| |____________________________________________| |__");
    setColor(14);
    printf("   ;::|     \\   '-'                ");
    setColor(11);
    printf("%s\n", "(__   ____________________________________________   __)");
    setColor(14);
    printf("   ;::|      \\                     ");
    setColor(11);
    printf("%s\n", "   | |                INSTRUCTIONS                | |");
    setColor(14);
    printf("   ;::|   _.=`\\                     ");
    setColor(11);
    printf("%s\n", "  | |                                            | |");
    setColor(14);
    printf("   `;:|.=` _.=`\\                    ");
    setColor(11);
    printf("%s\n", "  | |  Type help to get a list of available      | |");
    setColor(14);
    printf("     '|_.=`   __\\                  ");
    setColor(11);
    printf("%s\n", "   | |     commands and usage instructions        | |");
    setColor(14);
    printf("     `\\_..==`` /                   ");
    setColor(11);
    printf("%s\n", "   | |                                            | |");
    setColor(14);
    printf("      .'.___.-'.                   ");
    setColor(11);
    printf("%s\n", "   | | Feedback & Support: smiteshhc@gmail.com    | |");
    setColor(14);
    printf("     /          \\                  ");
    setColor(11);
    printf("%s\n", " __| |____________________________________________| |__");
    setColor(14);
    printf("    ('--......--')                 ");
    setColor(11);
    printf("%s\n", "(__   ____________________________________________   __)");
    setColor(14);
    printf("    /'--......--'\\                 ");
    setColor(11);
    printf("%s\n", "   | |                                            | |");
    setColor(14);
    printf("    `\"--......--\"`  \n");

    return 0;
}
