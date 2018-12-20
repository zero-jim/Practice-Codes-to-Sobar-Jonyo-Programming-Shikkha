#include <stdio.h>
#include <conio.h>
void main()
{
    long int num,temp,digit,dec_num=0,base=0;
    printf("\nEnter the binary number: ");
    scanf("%ld",&num);
    temp=num;
    while(num)
    {
        digit=num%10;
        dec_num+=digit << base;
        base +=1;
        num /=10;
    }
    printf("\nDecimal equivalent is %ld",dec_num);
    getch();
    return 0;
}
