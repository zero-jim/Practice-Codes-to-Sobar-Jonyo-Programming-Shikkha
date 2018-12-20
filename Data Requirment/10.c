#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Integer   type data takes %d byte,\n",sizeof(int));
    printf("Floating  type data takes %d byte,\n",sizeof(float));
    printf("Double    type data takes %d byte,\n",sizeof(double));
    printf("Character type data takes %d byte,\n",sizeof(char));
    getch();
}
