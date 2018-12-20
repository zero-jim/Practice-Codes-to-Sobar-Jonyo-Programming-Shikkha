#include <stdio.h>
#include <conio.h>
int main()
{
    float a=10.375;
    char* p;
    p=(char*)&a;
    printf("p       *p\n");
    printf("----    ----\n");
    printf("%X   %X\n",p,*p);
    ++p;
    printf("%X   %X\n",p,*p);
    ++p;
    printf("%X   %X\n",p,*p);
    ++p;
    printf("%X   %X\n",p,*p);
    getch();
    return 0;
}
