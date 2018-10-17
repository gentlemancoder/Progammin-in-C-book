// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
    int number = 0, right_digit = 0, tempNumber = 0, reverseNumber = 0;

    printf("Enter your number.\n");

    scanf("%i", &number);

    if (number < 0)
    {
         tempNumber = -number;
         printf("negative ");
    }
    else
        tempNumber = number;
    do
    {
        right_digit = tempNumber% 10;
        tempNumber = tempNumber / 10;
        reverseNumber *= 10;
        reverseNumber += right_digit;
    }
    while ( tempNumber != 0);

    do
    {
        right_digit = reverseNumber % 10;
        switch (right_digit)
        {
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        case 0:
            printf("zero ");
            break;
        default:
            break;
        }

        reverseNumber = reverseNumber / 10;
    }
    while (reverseNumber !=0);

    if (number % 10 == 0)
        printf("zero ");

    printf("\n");

    return 0;
}
