#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers separated by space: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is the largest number",a);
        else
            printf("%d is the largest number",c);
    }
    else
    {
        if(b>c)
            printf("%d is the largest number",b);
        else
            printf("%d is the largest number",c);
    }
    getch();
    return 0;
}
