#include <stdio.h>

int main ()
{
    int daysInYear = 365;
    int hoursInDay = 24;
    int minutesInDay = 24 * 60;
    int secondsInDay = 60 * minutesInDay;

    unsigned int secondsinYear  = secondsInDay * daysInYear;

    printf("Seconds in one year = %d\n",secondsinYear);
    printf("Seconds in leap year = %d\n",secondsinYear + secondsInDay);

    return 0;
}