#include <Stdio.h>
#include <conio.h>
int main()
{
    int row,col,size,mat[10][10];
    printf("Matrix Size? ");
    scanf("%d",&size);
    for(row=1; row<size+1; row++)
    {
        for(col=1; col<size+1; col++)
        {
            printf("Element [%d][%d] = ",row,col);
            scanf("%d",&mat[row][col]);
        }
        printf("\n");
    }
    printf("The given Matrix: \n");
    for(row=1; row<size+1; row++)
    {
        for(col=1; col<size+1; col++)
        {
            printf("    %d",mat[row][col]);
        }
        printf("\n");
    }
    printf("\n Output of Helically Traverse Matrix: \n");
    row=1;
    while(size>0)
    {
        for(col=row; col<size+1; col++)
            printf("  %d",mat[row][col]);
        for(col=row+1; col<size+1; col++)
            printf("  %d",mat[col][size]);
        for(col=size-1; col>row-1; col--)
            printf("  %d",mat[size][col]);
        for(col=size-1; col>row; col--)
            printf("  %d",mat[col][row]);
        row+=1;
        size-=1;
    }
    getch();
    return 0;
}
