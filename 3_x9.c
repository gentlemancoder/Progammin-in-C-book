#include <stdio.h>

int next_multiple(int i, int j)
{
    return i + j - i % j;
}

int main(void)
{
    int i, j;
    int a, b, c;
    a = next_multiple(365, 7);
    b = next_multiple(12258, 23);
    c = next_multiple(996, 4);
    printf("%i, %i, %i\n", a, b, c);

    return 0;
}
