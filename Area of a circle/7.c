#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
    float area, radius, pi;
    char ch;
    pi=3.1416;
    printf("\n Do you want to calculate area? (y/n):");
    ch=getch();
    ch=toupper(ch);
    while(ch !='n')
    {
        printf("\n What's your radius/: ");
        scanf("%f",&radius);
        area=pi*radius*radius;
        printf("\n\nArea of your circle is: %.2f.",area);
        printf("\n\n\n Do you want to calculate area?(y/n):");
        ch=getch();
        ch=toupper(ch);
    }
}
