#include <stdio.h>

int main(void)
{
    int var = 3;
    char *uid = "abc";
    var = 3 + -(int)(uid+1);
    printf("%d", var);
    return 0;
}
