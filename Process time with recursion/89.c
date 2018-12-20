#include <stdio.h>
#include <conio.h>
int string_length(const char *str)
{
    if(*str)
        return(1+string_length(str+1));
    else
    return (0);
}
int main()
{
    long int counter;
    time_t start_time, end_time;
    time(&start_time);
    for(counter=0;counter<1000000L;counter++)
        string_length("Niton's C programming book\n");
    time(&end_time);
    printf("Processing with recursion is %lfsec",end_time-start_time);
    getch();
    return 0;
}
