#include <stdio.h>
#include <windows.h>

int main(void)
{
    int hh,mm;
    char command[92];
    printf("\nEnter the time for automatic clean-up\n");
    printf("\nEnter hour in 24-hour format: ");
    while (scanf("%d", &hh) != 1)
    {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input.\nEnter hour in 24-hour format: ");
    }
    printf("Enter minute: ");
    while (scanf("%d", &mm) != 1)
    {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Invalid input.\nEnter minute: ");
    }
    snprintf(command, sizeof(command), "schtasks /create /tn \"OptiPurgeClear\" /tr \"C:\\OptiPurge\\AutoClear.bat\" /sc daily /st %02d:%02d", hh, mm);
    system(command);
    return 0;
}
