#include <stdio.h>
#include <conio.h>
int main()
{
    int x,*y;
    x=1;
    y=&x;
    printf("Value of x is %d\n",x);
    printf("Value of y is %x\n",y);
    printf("Address of x is %x\n",&x);
    return 0;
}
