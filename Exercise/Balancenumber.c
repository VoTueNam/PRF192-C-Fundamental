#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    if (c < 100 || c >= 1000)
    {
        printf("Invalid input");
        return 0;
    }
    int dau = c / 100;
    int sau = c % 10;
    if (dau == sau)
    {
        printf("Balanced");
    }
    else
    {
        printf("Unbalanced");
    }
 
    return 0;
}