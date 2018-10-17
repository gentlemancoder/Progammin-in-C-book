// Program to reverse the digits of a number

#include <stdio.h>

int main(void)
{
    int n;
    long factorial;

    printf("   N       N Factorial\n");
    printf(" ----      ---------------\n\n");

    for ( n = 1; n <= 10; n++)
    {
        factorial = 1;
        for (int temp = n; temp > 0; temp--)
        {
            factorial *= temp;
        }
        printf("  %2i        %10li\n", n, factorial);
    }

    return 0;
}
