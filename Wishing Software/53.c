#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("Enter 1 or 2 or 3 or 4 or 5\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("Have a good morning");
        break;
        case 2:
            printf("Have a nice evening");
            break;
            case 3: case 4:
                printf("Have a nice day");
                break;
            default:
                printf("No wishes for you");
    }
    getch();
    return 0;
}
