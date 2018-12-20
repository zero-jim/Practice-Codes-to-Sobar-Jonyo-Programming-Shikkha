#include <stdio.h>
#include <conio.h>
int main()
{
    int row,col,size,j,k,sum;
    int mat[5][5];
    printf("Matrix Size? ");
    scanf("%d",&size);
    printf("Enter Matrix elements....\n");
    for(row=1; row<size+1; row++)
    {
        for(col=1; col<size+1; col++)
        {
            printf("        Element[%d][%d]=",row,col);
            scanf("%d",&mat[row][col]);
        }
        printf("\n");
    }
    printf("The given Matrix is:\n");
    for(row=1; row<size+1; row++)
    {
        for(col=1; col<size+1; col++)
        {
            printf("    %d",mat[row][col]);
        }
        printf("\n");
    }
    printf("Diagonal Elements are:\n");
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
            if(row==col)
                printf(" %d   ",mat[row][col]);
        }
    }
    printf("\nSum of the Diagonal Elements is:\n");
    sum=0;
    for(row=1;row<size+1;row++)
    {
        for(col=1;col<size+1;col++)
        {
            if(row==col)
                sum+=mat[row][col];
        }
    }
    printf("%d",sum);
    getch();
    return 0;
}
