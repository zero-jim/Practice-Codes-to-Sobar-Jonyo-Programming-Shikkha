#include <stdio.h>
#include <conio.h>
#include <dos.h>
#define NAME 80
void main()
{
    char ch,name [NAME];
    int i;
    printf("Hello please type your name:");
    for(i=0;(ch=getchar())!='\n';++i)
    {
        name[i]=ch;
    }
    name[i]='\0';
    printf("\n%s%s%s","Nice to meet you ",name,".");
    printf("\n\nYour name backward spelled is ");
    for(--i;i>=0;--i)
    {
        putchar(name[i]);
    }
    printf("\n\n\nHave a nice day.....\a\a\a");
    getch();
}
