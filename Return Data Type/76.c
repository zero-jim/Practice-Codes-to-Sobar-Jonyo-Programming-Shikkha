#include <stdio.h>
#include <conio.h>
float change_data(int r,int n,int s)
{
    int result;
    result=r+n+s;
    return result;
}
void main(void)
{
    float result;
    result=change_data(15,12,11);
    printf("\nResult is %.2f",result);
    getch();
    return 0;
}
