#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i, n=20;
    float x,y,sum;
    printf("\nInput a number (x): ");
    scanf("%f",&x);
    x=x*3.1416/180;
    y=1;
    for(i=1;i<(x+1);i++)
    {
        y=y*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
        sum=sum+y;
    }
    printf("\ncos(x)=%.3f",sum);
    getch();
    return 0;
}
