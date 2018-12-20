#include <stdio.h>
#include <conio.h>
void main()
{
    int month, days;
    printf("Enter Number of days:");
    scanf("%d",&days);
    month = days/30;
    days = days%30;
    printf("Number of month: %d and days: %d", month,days);
    getch();
    return 0;
}
