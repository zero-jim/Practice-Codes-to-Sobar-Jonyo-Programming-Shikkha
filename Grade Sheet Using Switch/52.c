#include <stdio.h>
#include <conio.h>
int main()
{
    int score, grade;
    printf("Enter Your Score: ");
    scanf("%d",&score);
    grade=score/5;
    switch(grade)
    {
        case 19:
            case 18:
                case 17:
                    case 16:
                        printf("Your grade is: A+");
                            break;
                            case 15:
                                printf("Your grade is A");
                                break;
                                case 14:
                                    printf("Your grade is A-");
                                    break;
                                    case 13:
                                        printf("Your grade is B+");
                                        break;
                                        case 12:
                                            printf("Your grade is B");
                                            break;
                                            case 11:
                                                printf("Your grade is B-");
                                                break;
                                                case 10:
                                                    printf("Your grade is C+");
                                                    break;
                                                    case 9:
                                                        printf("Your grade is C");
                                                        break;
                                                        case 8:
                                                            printf("Your grade is D");
                                                            break;
                                                            default:
                                                                printf("Sorry you have failed");
                                                                break;
    }
    getch();
    return 0;
}
