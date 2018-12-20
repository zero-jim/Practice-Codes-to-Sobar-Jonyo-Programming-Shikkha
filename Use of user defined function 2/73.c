#include <stdio.h>
#include <conio.h>
void sum_of_all(int jim) //User defined function
{
    int n, sum;
    sum=0;
    for(n=1;n<=jim;n++)
        sum+=n;
    printf("sum of all numbers from 1 to %d is: %d",jim,sum);
}
void main(void)// Main Function
{
    sum_of_all(200);
    getch();
    return 0;
}
