// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
    int number, right_digit, tempNumber;

    printf("Enter your number.\n");
    scanf("%i", &number);

    if (number < 0)
        tempNumber = -number;

    do
    {
        right_digit = tempNumber% 10;
        printf("%i", right_digit);
        tempNumber = tempNumber / 10;
    }
    while ( tempNumber != 0);

    if (number < 0)
        printf("-");

    printf("\n");

    return 0;
}
