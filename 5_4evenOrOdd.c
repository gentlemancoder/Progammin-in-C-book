// Program to determine whether a number is even or odd

#include <stdio.h>

int main(void)
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number is even.");
    else
        printf("The number is odd.");

    return 0;
}
