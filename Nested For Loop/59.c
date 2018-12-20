#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("\n\ni is now %d\n\n",i);
        for(j=1;j<=4;j++)
            printf("j is now %d, ",j);
    }
    getch();
    return 0;
}
