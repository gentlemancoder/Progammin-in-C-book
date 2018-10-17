// Program to test for even divisibility

#include <stdio.h>

int main (void)
{
    int a, b;
    printf("Enter two numbers into the divisibility tester: ");
    scanf("%i %i", &a, &b);

    if (b == 0)
        printf("Divide by Zero!");
    else if ( a % b == 0 )
        printf("%i is evenly divisible by %i", a, b);
    else
        printf("%i is NOT evenly divisible by %i", a, b);

    return 0;
}
