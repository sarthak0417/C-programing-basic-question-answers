#include <stdio.h>
int isLeapYear(int year) 
{
return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int isValidDate(int day, int month, int year) 
{
   if (month < 1 || month > 12)
        return 0;

    int maxDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year))
        maxDays[2] = 29;

    return (day >= 1 && day <= maxDays[month]);
}
int main() 
{
    int day, month, year;
    printf("Enter day, month, and year (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    if (isValidDate(day, month, year))
    {
        printf("The date %02d/%02d/%04d is valid.\n", day, month, year);
    } 
    else 
    {
        printf("The date %02d/%02d/%04d is not valid.\n", day, month, year);
    }
    return 0;
}