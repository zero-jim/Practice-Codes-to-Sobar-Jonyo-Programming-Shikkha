#include <stdio.h>
#include <conio.h>
int abs_val(int val)
{
    return (-val);
    return (+val);
}
void main(void)
{
    int val,get;
    printf("\n\nEnter a value: ");
    scanf("%d",&val);
    get=abs_val(val);
    printf("\nAbsolute value of %d is %d",val,get);
    getch();
    return 0;
}
