#include <stdio.h>
#include <conio.h>
void main()
{
    float n;
    while(1)
    {
        printf("Enter a number to find it\'s square root: ");
        scanf("%f",&n);
        if(n<0)
            break;
        printf("%f\n\n",sqrt(n));
    }
    printf("\n\aThis is undefined");
    getch();
    return 0;
}
