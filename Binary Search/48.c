#include <stdio.h>
#include <conio.h>
#define MAX_ELEMENT 50
#define TRUE 1
#define FALSE 0
int main()
{
    int i=0,
    low=0,
    mid=0,
    high=0,
    found=TRUE,
    keyELEMENT=0,
    totalELEMENT=0,
    array [MAX_ELEMENT];
    printf("\nHow many elements: ");
    scanf("%d",&totalELEMENT);
    printf("\nENTER elements in ascending order: \n\n");
    for(i=0;i<totalELEMENT;i++)
    {
        printf("     Element#%d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nElement to be searched: ");
    scanf("%d",&keyELEMENT);
    low=0;
    high=totalELEMENT-1;
    found=FALSE;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(keyELEMENT<array[mid])
        {
            high=mid-1;
        }
        else
        {
            if(keyELEMENT>array[mid])
            {
                low=mid+1;
            }
            else
            {
                if(keyELEMENT==array[mid])
                {
                    printf("\n%d is found at %d.",keyELEMENT,mid+1);
                    found=TRUE;
                    break;
                }
            }
        }
    }
    if(found==FALSE)
    {
        printf("\n%d is not in the list.",keyELEMENT);
    }
    getch();
    return 0;
}
