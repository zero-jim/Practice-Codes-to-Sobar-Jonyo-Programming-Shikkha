#include <stdio.h>
#include <conio.h>
void main()
{
    long int n,sum,range;
    printf("\nHow many numbers do you want to calculate: ");
    scanf("%ld",&range);
    sum=0;
    for(n=1; n<=range; n++)
    {
        sum += n;
        printf("\nSum of 1 to %ld is %ld",range,sum);
    }
    getch();
    return 0;
}
