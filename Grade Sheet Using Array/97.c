#include <stdio.h>
#include <conio.h>
int main()
{
    int i,sum=0,grd[100];
    float avrg;
    for(i=0;i<100;i++)
    {
        printf("Enter GRADE[%d]: ",i);
        scanf("%d",&grd[i]);
        sum+=grd[i];
    }
    avrg=sum/100;
    printf("Average is: %f",avrg);
    getch();
    return 0;
}
