#include <stdio.h>
#include <conio.h>
int main()
{
    int grade[5],i,sum=0;
    float avrg;
    for(i=0;i<5;i++)
    {
        printf("\n\nEnter grade[%d]: ",i+1);
        scanf("%d",&grade[i]);
        sum+=grade[i];
    }
    avrg=(float)(sum)/5.0;
    printf("\n\n\n\nAverage is : %.2f",avrg);
    getch();
    return 0;
}
