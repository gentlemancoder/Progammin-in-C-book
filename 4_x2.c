// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
    int n;

    printf("   N       N Squared.\n");
    printf(" ----      -----------\n\n");

    for ( n = 1; n <= 10; n++)
    {
        printf("  %2i        %3i\n", n, n * n);
    }

    return 0;
}
