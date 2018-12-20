#include <stdio.h>
#include <conio.h>
long int factorial(long int n)
{
    if(n<=1)
        return 1;
    else
        return (n*factorial(n-1));
}
int main(void)
{
    long int n,x;
    scanf("%d",&n);
    x = factorial(n);
    printf("Factorial of %d is %d",n,x);
    return 0;
}
