#include <stdio.h>

int main()
{
    printf("First degree equation: ax + b = 0\n");
    double a, b;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);

    if (a == 0 && b != 0)
    {
        printf("No solution");
    }
    else if (a == 0 && b == 0)
    {
        printf("Infinity solution");
    }
    else
    {
        double result = (-b) / a;
        printf("Result: %lf", result);
    }

    return 0;
}