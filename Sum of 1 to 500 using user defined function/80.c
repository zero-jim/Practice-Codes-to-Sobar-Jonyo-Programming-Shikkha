#include <stdio.h>
#include <conio.h>
void print_msg(void)
{
    printf("\nSum of all numbers from 1 to given your number:");
}
void added_all(long int val)
{
    int n;
    long int sum;
    sum=0;
    for (n=0;n<=val;n++)
        sum+=n;
    printf("\n\nSum of all numbers from 1 to %ld is %ld",val,sum);
    getch();
}
int main(void)
{
    print_msg();
    added_all(500);
    getch();
    return 0;
}
