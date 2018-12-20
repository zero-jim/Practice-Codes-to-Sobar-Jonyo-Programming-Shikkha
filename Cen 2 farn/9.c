#include <stdio.h>
#include <conio.h>
int main()
{
    float cent, farn;
    printf("Enter your centigrade temperature: ");
    scanf("%f",&cent);
    farn= (1.8*cent+32);
    printf("Your fahrenheit temperature is: %.2f",farn);
    getch();
}
