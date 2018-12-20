#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    x=1;
    printf("Using decrement(x--) operator as postfix x=%d\n",x--);
    printf("x=%d\n\n",x);
    x=1;
    printf("Using decrement(--x) operator as prefix x=%d\n",--x);
    printf("x=%d",x);
}
