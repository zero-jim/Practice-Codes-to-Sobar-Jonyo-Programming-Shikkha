#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    int i, vowel, constant, digit, word, other;
    char string[80], c;
    i=vowel=constant=digit=other=0;
    word=0;
    printf("Program to count vowels, constants, digits, words\n");
    printf("and other characters in string.....\n\n");
    printf("Type a string....: ");
    scanf("%[^\n]", string);
    while((c = tolower (string[i++]))!='\0')
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            ++vowel;
        else
            if((c>'a'&&c<'e')||(c>'e'&&c<'i')||(c>'i'&&c<'o')||(c>'o'&&c<'u')||(c>'u'))
            ++constant;
        else
            if (c>='0'&&c<='9')
            ++digit;
        else
            if(c==' ')
            ++word;
        else
            ++other;
    }
    ++word;
    printf("#No. of Vowels\t\t: %2d\n",vowel);
    printf("#No. of Consonants\t: %2d\n",constant);
    printf("#No. of Digits\t\t: %2d\n",digit);
    printf("#No. of Words\t\t: %2d\n",word);
    printf("#No. of Other Characters: %2d\n",other);
    getch();
    return 0;
}
