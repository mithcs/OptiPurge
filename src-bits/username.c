#include <stdio.h>
#include <windows.h>

void Username();

    char username[256];
    DWORD usernameSize = sizeof(username);

int main()
{


    Username();
printf("%s", username);
    return 0;
}

void Username()
{
    if ((GetUserNameA(username, &usernameSize)) != TRUE)
        fprintf(stdout, "Unable to get username - %d", GetLastError());
}
