#include <stdio.h>

int main (void)
{

    int dollars, cents, count;

    for ( count = 1; count < 11; ++count)
    {
        printf("Enter dollars: ");
        scanf("%i", &dollars);
        printf("Enter cents: ");
        scanf("%i", &cents);
        printf("$%i %.2i\n\n", dollars, cents);

    }

    return 0;
}
