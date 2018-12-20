#include <stdio.h>
#include <conio.h>
int x;
void X(void)
{
    x=10;
    printf("\nIn X():x=%d\n",x);
}
int main(void)
{
    printf("Before calling X():x=%d\n",x);
    X();
    printf("\nAfter calling X():x=%d",x);
    getch();
    return 0;
}
