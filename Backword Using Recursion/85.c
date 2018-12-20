#include <stdio.h>
#include <conio.h>
void back_print(void)
{
    char ch;
    if((ch=getchar())!='\n')
        back_print();
    putchar(ch);
}
int main()
{
    printf("Type a line of text: ");
    back_print();
    getch();
    return 0;
}
