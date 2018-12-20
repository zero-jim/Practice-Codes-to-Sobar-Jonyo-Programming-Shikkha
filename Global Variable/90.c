#include <stdio.h>
#include <conio.h>
int ratna=15,nipu=10,romi=20;
void _func(void)
{
    printf("\nIn _func():\n\t");
    printf("Ratna=%d ",ratna);
    printf("Nipu=%d ",nipu);
    printf("Romi=%d ",romi);
}
int main(void)
{
    printf("\nIn main():\n\t");
    printf("Ratna=%d ",ratna);
    printf("Nipu=%d ",nipu);
    printf("Romi=%d ",romi);
    _func();
    getch();
    return 0;
}
