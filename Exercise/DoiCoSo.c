#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int DectoBin(int n)
{
    //n = 10;
    int a[10], i;
    system("cls");
    printf("Enter the number to convert: %d", n);
    //scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is=");
    //16bit
    int j = 16 - i, k;
    for (k = 0; k < j; k++)
    {
        printf("0");
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}

int BinToDec(long long num)
{
    // declaration of variables
    int decimal_num = 0, base = 1, rem;
    printf("\n Enter a binary number with the combination of 0s and 1s \n");
    //scanf (" %d", &num); // accept the binary number (0s and 1s)

    long long binary_num = 1011101010111110; // assign the binary number to the binary_num variable

    while (num > 0)
    {
        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
        decimal_num = decimal_num + rem * base;
        num = num / 10; // divide the number with quotient
        base = base * 2;
    }

    printf(" The binary number is %lld \t", binary_num);    // print the binary number
    printf(" \n The decimal number is %d \t", decimal_num); // print the decimal
    return 0;
}

int decToHex(long decimalnum)
{
    long quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];

    printf("Enter decimal number: ");
    //scanf("%ld", &decimalnum);

    quotient = decimalnum;

    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }

    // display integer into character
    for (i = j; i >= 0; i--)
    {
        char c = hexadecimalnum[i];
        if ((c <= 'Z' && c >= 'A') || (c >= '0' && c <= '9'))
            printf("%c", c);
    }
    return 0;
}

int hexToDec()
{
    char hex[17];
    long long decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;

    /* Input hexadecimal number from user */
    printf("Enter any hexadecimal number: ");
    gets(hex);

    /* Find the length of total number of hex digit */
    len = strlen(hex);
    len--;

    /*
     * Iterate over each hex digit
     */
    for (i = 0; hex[i] != '\0'; i++)
    {

        /* Find the decimal representation of hex[i] */
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            val = hex[i] - 48;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            val = hex[i] - 97 + 10;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal number = %s\n", hex);
    printf("Decimal number = %lld", decimal);

    return 0;
}

int binToOct(long long bin)
{
    int oct = 0, dec = 0, i = 0;
    long long num = bin;

    // converting binary to decimal
    while (bin != 0)
    {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;

    // converting to decimal to octal
    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("%lld in binary = %d in octal", num, oct);
}

int decToOct(long decimalnum)
{
    long remainder, quotient;
    int octalNumber[100], i = 1, j;
 
    // printf("Enter the decimal number: ");
    // scanf("%ld", &decimalnum);
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal no %d: ", decimalnum);
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    return 0;
}

int OctToDec(int n) {
    int p = 0, decimal = 0, r;
    
    while(n>0){
        
        // retrieving the right-most digit of n
        r = n % 10;
        
        // dividing n by 10 to remove the
        // right-most digits since it is already
        // scanned in previous step
        n = n / 10;
        
        decimal = decimal + r * pow( 8 , p );    
        ++p;
        
    }
    printf("\nDecimal is: %d", decimal);
    // return decimal;
}

int binToHex(long long binaryval)
{
    long int hexadecimalval = 0, i = 1, remainder;
 
    // printf("Enter the binary number: ");
    // scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return 0;
}

int main()
{
    // decToHex(10);
    // hexToDec();
    // decToOct(100);
    // OctToDec(122);

    // DectoBin(10);
    // binToOct(1011101010111110);
    // BinToDec(1011101010111110);
    // binToHex(1011101010111110);

    // hex -> oct = hex -> dec -> oct
    // oct -> hex = oct -> dec -> hex
    // hex -> bin = hex -> dec -> bin
    // oct -> bin = oct -> dec -> bin
}