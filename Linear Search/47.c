#include <stdio.h>
#include <conio.h>
#define MAX_ELEMENT 50
#define TRUE 1
#define FALSE 0
int main()
{
    int i=0,
    found=TRUE,
    keyELEMENT=0,
    totalELEMENTS=0,
    array [MAX_ELEMENT];
    printf("\nHow many elements: ");
    scanf("%d",&totalELEMENTS);
    for(i=0;i<totalELEMENTS;i++)
    {
        printf("\nEnter Elements#%d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nElement to search:");
    scanf("%d",&keyELEMENT);
    found=FALSE;
    for(i=0;i<totalELEMENTS;i++)
    {if(array[i]==keyELEMENT)
    {
        printf("\n%d is at %d.",keyELEMENT,i+1);
        found=TRUE;
        break;
    }
    }
    if(FALSE==found)
    {
        printf("\n%d is not in the list.",keyELEMENT);
    }
    getch();
    return 0;
}
