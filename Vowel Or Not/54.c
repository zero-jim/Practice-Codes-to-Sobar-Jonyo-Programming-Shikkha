#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Your choice is a vowel");
        break;
    default :
        printf("Your choice is not a vowel");
    }
    getch();
    return 0;
}
