#include <stdio.h>
#include <conio.h>
void funcX(int get_array[])
{
    int n;
    for(n=0;n<5;n++)
    {
        printf("\n %d", get_array[n]);
    }
}
int main()
{
    int jim[5]={10,20,30,40,50};
    funcX(jim);
    getch();
    return 0;
}
