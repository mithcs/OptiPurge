#include <stdio.h>
#include <time.h>

int main()
{
    char date[9], time[9];

    _strdate_s(date, 9);
    _strtime_s(time, 9);
    printf("%s %s", date, time);
    return 0;
}
