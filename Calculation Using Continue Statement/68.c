#include <stdio.h>
#include <conio.h>
void main()
{
    int score,total;
    char count;
    count=total=0;
    while(count<4)
    {
        printf("\nEnter your score: ");
        scanf("%d",&score);
        if((score<0)||(score>100))
            continue;
        total+=score;
        printf("\nTotal score is: %d",total);
        count++;
    }
    getch();
}
