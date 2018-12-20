#include <stdio.h>
#include <conio.h>
void main()
{
    int year;
    printf("Input a year to find if it is leap year or not (like-1995):\n\n");
    scanf("%d",&year);
    //we know that if a year is have no modules after dividing it by 4 or 400 & have modules after dividing it by 100 it's a leap year
     if((year%4==0)||(year%400==0)&&(year%100!=0))
        printf("\n\aIt's a leap year!!!!!!!!!");
     else
        printf("\n\aSorry it's not a leap year......");
     getch();
     return 0;
}
