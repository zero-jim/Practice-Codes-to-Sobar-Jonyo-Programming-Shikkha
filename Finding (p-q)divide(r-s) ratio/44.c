#include <stdio.h>
#include <conio.h>
void main()
{
    int p,q,r,s;
    float ratio;
    scanf("%d %d %d %d",&p,&q,&r,&s);
        if((r-s)==0)
    {
        printf("Ratio is infinite because (r-s) is 0.");
    }
    ratio=(float)(p+q)/(r-s);
    printf("\nRatio is %.2f\a",ratio);
    getch();
    return 0;
}
