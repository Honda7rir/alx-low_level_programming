#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 0;
    day = 0;
    year = 0;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
    scanf("%02d/%02d/%04d", &month, &day, &year);
    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
