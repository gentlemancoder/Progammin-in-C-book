#include <stdio.h>

int main (void)
{
    float x = 2.55;
    float y;

    y = 3 * (x*x*x) - 5 * (x*x) + 6;

    printf("%f", y);

    return 0;
}
