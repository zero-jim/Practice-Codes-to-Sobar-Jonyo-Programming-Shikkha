#include <stdio.h>
#include <conio.h>
void main()
{
    int counter;
    printf("\n\nFirst loop");
    for(counter=1;counter<=100;counter++)
    {
        if(counter==50)
            break;
        printf("%d  ",counter);
    }
    printf("\n\nSecond loop");
    for(counter=100;counter>=1;counter--)
    {
        if(counter==50)
            break;
        printf("%d  ",counter);
    }
    getch();
    return 0;
}
