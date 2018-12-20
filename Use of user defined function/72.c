#include <stdio.h>
#include <conio.h>
void square_num(void)
{
    int num, i;
    printf("\n\nNumber  Square\n\n");
    for(num=1;num<=10;num++)
        printf("%3d     %3d\n",num,num*num);
}
void cube_num(void)
{
    int i,num;
    printf("\n\nNumber  Cube\n\n");
    for(num=1;num<=10;num++)
        printf("%3d     %4d\n",num,num*num*num);
}
void main(void)
{
    printf("\n\nPress Any Key To See Square Value From 1 to 10.");
    getch();
    square_num();
    printf("\n\nPress Any Key To See Cubic Value From 1 to 10.");
    getch();
    cube_num();
    getch();
    return 0;
}
