#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter first value: ");
    scanf("%d",&a);
    printf("Enter second value: ");
    scanf("%d",&b);
    c=a*b;
    printf("%d*%d is %d.",a,b,c);
    getch();
    return 0;
}
