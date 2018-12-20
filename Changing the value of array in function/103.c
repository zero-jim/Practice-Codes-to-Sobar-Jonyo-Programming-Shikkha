#include <stdio.h>
#include <conio.h>
void funcX(int getarray[])
{
    int n;
    printf("\nOriginal value of all elements");
    for(n=0;n<5;n++)
    {
        printf("\n %5d",getarray[n]);
    }
    getarray[2]=300;
}
int main()
{
    int niton[5]={10,20,30,40,50};
    printf("\n Before calling funcX():\n\tniton[2]=%d",niton[2]);
    funcX(niton);
    printf("\n After calling funcX():\n\tniton[2]=%d",niton[2]);
    getch();
    return 0;
}
