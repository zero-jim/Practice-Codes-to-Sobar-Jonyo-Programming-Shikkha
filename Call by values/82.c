#include <stdio.h>
#include <conio.h>
void call_by_value(int,int,int);
int main()
{
    int ratna,nipu,romi;
    ratna=1;nipu=2;romi=3;
    call_by_value(ratna,nipu,romi);
    printf("\nAfter function calling:%d %d %d",ratna,nipu,romi);
    getch();
    return 0;
}
void call_by_value(int x,int y,int z)
{
    printf("\nOriginal values are:%d %d %d",x,y,z);
    x+=100;
    y+=101;
    z+=102;
    printf("\nAfter changing the values:%d %d %d",x,y,z);
}
