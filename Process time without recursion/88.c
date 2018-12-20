#include <stdio.h>
#include <conio.h>
int string_length(const char *str)
{
    int length=0;
    while(*str++)
    {
        length++;
    }
    return (length);
}
int main()
{
    long int counter;
    time_t start_time, end_time;
    time(&start_time);
    for(counter=0;counter<1000000L;counter++)
        string_length("Niton's C programming book\n");
    time(&end_time);
    printf("Processing without recursion is %lfsec",end_time-start_time);
    getch();
    return 0;
}
