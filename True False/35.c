#include <stdio.h>
#include <conio.h>
void main()
{
    int x,y,z;
    x=10;y=19;z=28;
    printf("Less than (<) operator:\n");
    printf("\t x<y : %d\n",x<y);
    printf("\t y<x : %d\n",y<x);
    printf("Less than or equal(<=) operator:\n");
    printf("\t x<=y : %d\n",x<=y);
    printf("\t y<=x : %d\n",y<=x);
    printf("Greater than (>) operator:\n");
    printf("\t x>y : %d\n",x>y);
    printf("\t y>x : %d\n",y>x);
    printf("Greater than or equal (>=) operator:\n");
    printf("\t x>=y : %d\n",x>=y);
    printf("\t y>=x : %d\n",y>=x);
    getch();
    return 0;
}
