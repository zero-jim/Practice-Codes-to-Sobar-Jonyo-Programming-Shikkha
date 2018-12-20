#include <stdio.h>
#include <conio.h>
int x=10;
void func(void)
{
    printf("\nInside func(): x=%d",x);
    {
        int x=100;
        printf("\nInside block statement: x=%d",x);
    }
}
int main()
{
    printf("In main(): x=%d",x);
    func();
    int x=15;
    printf("\nx=%d",x);
    getch();
    return 0;
}
