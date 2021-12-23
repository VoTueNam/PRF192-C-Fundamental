#include <stdbool.h>
#include <stdio.h>

//gcf function - return gcd of two numbers
int gcd(int n, int m)
{
    int gcd, remainder;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;

    return gcd;
}//end gcd function

int main (int argc, const char * argv[]) {
    // insert code here...
    //--declarations
    int number1, number2;
    int newNumber1, newNumber2;

    //--get user input
    printf("Enter a fraction: ");
    scanf("%d/%d", &number1, &number2);

    //--calculations
    //find the gcd of numerator and denominator
    //then divide both the numerator and denominator by the GCD
    newNumber1 = number1 / gcd(number1, number2);
    newNumber2 = number2 / gcd(number1, number2);

    //--results
    printf("In lowest terms: %d/%d", newNumber1, newNumber2);
}