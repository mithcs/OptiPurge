#include <stdio.h>
#include <windows.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(NULL));
    char *WrongInput[] = {"Your input is as appealing as shadow in the night",
                            "Your input looks like fish on the bicycle",
                            "Your input is as perfect as fireworks in afternoon",
                            "Your input is like penguin in a desert"};

    printf("\n %s\n", WrongInput[rand() % 4]);
    printf(" Try again!\n");

        printf("\nOptiPurge is a powerful utility software designed to enhance PC performance by efficiently\n");
    printf("cleaning and removing junk, providing an optimized and streamlined computing experience.\n");

    return 0;
}
