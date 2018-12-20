#include <stdio.h>
#include <conio.h>
void main()
{
    int count;
    printf("First iteration\n");
    for(count=10;count>=1;count--)
        printf("#%d ",count);
    printf("\nSecond iteration\n");
    for(count=5;count>=1;count--)
        printf("#%d ",count);
    printf("\nThird iteration\n");
    for(count=-2;count>=1;count--)
        printf("#%d ",count);
    getch();
}
