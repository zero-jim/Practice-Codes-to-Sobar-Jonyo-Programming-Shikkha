#include <stdio.h>
#include <conio.h>
int main()
{
    int x,*p,a[5]={10,20,30,40,50};
    p=a;
    printf("%x  %d\n",p,x=*p++);
    printf("%x  %d\n",p,x=*++p);
    printf("%x  %d\n",p,x=++*p);
    printf("%x  %d",&a[2],a[2]);
    getch();
    return 0;
}
