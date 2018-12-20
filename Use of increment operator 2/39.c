#include <stdio.h>
#include <conio.h>
void main()
{
    int x=1,y=2;
    printf("%d\t%d\n\n",y,y=x++);
    printf("%d\t%d",++x,++y);
    getch();
}
