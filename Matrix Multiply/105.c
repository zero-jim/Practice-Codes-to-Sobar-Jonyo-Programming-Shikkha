#include <stdio.h>
#include <conio.h>
int main()
{
    int a[2][2]= {5,4,4,4};
    int b[2][2]= {6,7,4,8};
    int c[2][2],i,j,k,sum;
    printf("\n Matrix A is \n\t");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n\t");
    }
    printf("\n Matrix B is \n\t");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n\t");
    }
    printf("\n Matrix C means A*B is \n\t");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;
            for(k=0; k<2; k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
        }
        printf("\n\n\t");
    }
    getch();
    return 0;
}
