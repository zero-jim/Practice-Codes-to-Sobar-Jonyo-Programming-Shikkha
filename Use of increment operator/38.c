#include <stdio.h>
#include <conio.h>
void main()
{
    int var;
    var=1;
    printf("Using postfix(var++) var= %d\n\n",var++);
    printf("Value of var after increment var=%d\n\n\n", var);
    var=1;
    printf("Using prefix(++var) var= %d\n\n",++var);
    printf("Value of var after increment var=%d\n\n\n",var);
    getch();
}
