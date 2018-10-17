// Coverts 27 degrees F to degrees C

#include <stdio.h>

int main(void)
{
    float C = 0, F = 0;
    F = 27;
    C = (F - 32) / 1.8;
    printf("%f", C);
}
