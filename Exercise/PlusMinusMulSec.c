#include <stdio.h>

int main()
{
    double num1, num2;
    char op = '+';

    printf("Enter num1, operation and num2: ");
    // getchar();
    scanf("%lf%c%lf", &num1, &op, &num2);

    // printf("\nEnter operation: ");
    // scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("%lf", num1 + num2);
        break;
    case '-':
        printf("%lf", num1 - num2);
        break;
    case '*':
        printf("%lf", num1 * num2);
        break;
    case '/':
        printf("%lf", num1 / num2);
        break;
    default:
        printf("OP is not supported");
        break;
    }
    return 0;
}