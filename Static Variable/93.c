#include <stdio.h>
#include <conio.h>
void use_static(void)
{
    static int count=1;
    printf("main() calls use_static() %d times\n",count);
    count++;
}
int main()
{
    use_static();
    use_static();
    use_static();
    use_static();
    use_static();
    getch();
    return 0;
}
