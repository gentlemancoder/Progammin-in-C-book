// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
    int n;

    printf("   N       N Triangular.\n");
    printf(" ----      ---------------\n\n");

    for ( n = 5; n <= 50; n+=5)
    {
        printf("  %2i        %6i\n", n, n * (n +1) / 2);
    }

    return 0;
}
