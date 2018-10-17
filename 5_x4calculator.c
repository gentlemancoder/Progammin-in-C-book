// Program for division

#include <stdio.h>

int main (void)
{
    int input;
    float accumulator = 0;
    char op;

    printf("\n\nWelcome to the adding calculator.\n");
    printf("This calculator performs basic addition (+), \n");
    printf("subtraction (-), multiplication (*), and division (/). \n");
    printf("To use the calcutor, first set an intial value by entering (S). \n");
    printf("To end operations enter (E).\n\n");

    printf("Enter a number and an operator.\n");

    do
    {
    scanf("%i %c", &input, &op);
        switch (op)
        {
            case 'E':
            case 'e':
                break;
            case 'S':
            case 's':
                accumulator = (float) input;
                break;
            case '+':
                accumulator += input;
                break;
            case '-':
                accumulator -= input;
                break;
            case '*':
                accumulator *= input;
                break;
            case '/':
                if (input == 0)
                        printf("Error, cannot divide by 0!\n");
                else
                    accumulator /= input;
                break;
            case '\n':
                accumulator += input;
            default:
                printf("Invalid operator.\n");
                break;
            }
        printf("%.6f\n", accumulator);
    }
    while (op != 'E' || 'e');

    printf("%.6f\n", accumulator);

    return 0;
}
