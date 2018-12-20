#include <stdio.h>
#include <conio.h>
int main()
{
    int a=0;
    printf("Enter your score: ");
    scanf("%d",&a);
    if(a>=80&&a<=100)
        printf("\nYou got an A+");
    if((a<=79)&&(a>=75))
        printf("\nyou got an A");
    if((a<=74)&&(a>=70))
        printf("\nyou got an A-");
    if((a<=69)&&(a>=65))
        printf("\nyou got a B+");
    if((a<=64)&&(a>=60))
        printf("\nyou got a B");
    if((a<=59)&&(a>=55))
        printf("\nyou got a B-");
    if((a<=54)&&(a>=50))
        printf("\nyou got a C+");
    if((a<=49)&&(a>=45))
        printf("\nyou got a C");
    if((a<=44)&&(a>=40))
        printf("\nYou got a D");
    if(a<40)
        printf("\nSorry you have failed");
    getch();
    return 0;

}
