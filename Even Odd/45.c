#include <stdio.h>

void main()
{
int n;
printf("Enter any integer number:");
scanf("%d",&n);
if((n%2)==0)
    printf("The number is even");
else
    printf("The number is odd");
getch();
return 0;
}
