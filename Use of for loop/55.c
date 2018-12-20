#include <stdio.h>
#include <conio.h>
void main ()
{
    int count;
    printf("\n\a First for loop\n");
    for(count=1;count<=15;count++)
        printf("#%d. ",count);
    getch();
    printf("\n\a Second for loop\n");
    for(count=1;count<=10;count++)
        printf("#%d. ",count);
    getch();
    printf("\n\a Third for loop\n");
    for(count=100;count<=5;count++)
        printf("#%d. ",count);
    getch();
    return 0;
}
