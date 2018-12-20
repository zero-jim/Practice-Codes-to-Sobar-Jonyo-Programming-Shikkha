#include <stdio.h>
#include <conio.h>
int main(void)
{
    int g_1,g_2,g_3,g_4,g_5;
    float avrg;
    scanf("%d %d %d %d %d",&g_1,&g_2,&g_3,&g_4,&g_5);
    avrg=(g_1+g_2+g_3+g_4+g_5)/5.0;
    printf("\n\n\nAverage is : %.2f",avrg);
    getch();
    return 0;
}
