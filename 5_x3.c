// Program for division

#include <stdio.h>

int main (void)
{
    int a, b;
    float result;
    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);

    if (b == 0)
        printf("Divide by Zero!");
    else
        result = (float) a / b;
        printf("%.3f", result);

    return 0;
}
