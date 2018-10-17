// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int n, two_to_the_n = 1;

    printf("Table of the powers of two\n\n");
    printf("   N       2 to the Nth power\n");
    printf(" ----      ---------------\n\n");

    for ( n = 0; n <= 10; n++)
    {
        printf("  %2i        %i\n", n, two_to_the_n *= 2);
    }

    return 0;
}
