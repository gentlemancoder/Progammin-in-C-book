// Program to calculate the sum of the digits of a number

#include <stdio.h>

int main(void)
{
    int number, right_digit, sumtotal = 0;

    printf("Enter your number.\n");
    scanf("%i", &number);

    while ( number != 0)
    {
        right_digit = number % 10;
        sumtotal += right_digit;
        number = number / 10;
    }

    printf("%i\n", sumtotal);

    return 0;
}
