#include <stdio.h>
#include <conio.h>
void recursive_call(int);
int main()
{
    recursive_call(2);
    getch();
    return 0;
}
void recursive_call(int x)
{
    if(x==0)
        return;
    printf("%d\n",x);
    recursive_call(x-1);
    printf("\n\nCall End");
}
