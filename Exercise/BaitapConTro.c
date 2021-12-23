#include <stdio.h>

int main()
{
    int a, b, c, n;
    do
    {
        printf("\nMENU:");
        printf("\n1. Enter 3 sides of triangle");
        printf("\n2. Calculating the Perimeter of a triangle");
        printf("\n3. Exit");
        printf("\n===> Your choose: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            while (1)
            {
                printf("\nEnter a,b,c = ");
                Nhap(&a, &b, &c);
                printf("%d %d %d", a, b, c);
                if (kiemTra(a, b, c) == 1)
                {
                    printf("\nInput Valid");
                    break;
                }
                else
                {
                    printf("\nInput Invalid - Try Again!!!\n");
                }
            }
            break;
        case 2:
            if (kiemTra(a, b, c) == 0)
            {
                printf("\nEnter 3 sides of triangle FIRST!!!\n");
            }
            printf("\nPerimeter = %d", ChuVi(a, b, c));
            break;
        case 3:
            return 0;
        default:
            printf("\nInvalid input - Try Again!!!\n");
            break;
        }
    } while (1);
}

void Nhap(int* a, int* b, int* c)
{
    scanf("%d %d %d", a, b, c);
}

int kiemTra(int a, int b, int c)
{
    if (a == 0 | b == 0 || c == 0)
    {
        return 0;
    }
    if (a + b > c && b + c > a && a + c > b)
    {
        return 1;
    }
    return 0;
}

int ChuVi(int a, int b, int c)
{
    return a + b + c;
}