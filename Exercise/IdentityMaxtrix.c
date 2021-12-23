#include<stdio.h>

int main()
{
    //Bai1
    printf("\n1. Print 5-10-15-...-100\n");
    int i = 10;
    printf("5");
    do
    {
        printf("-%d", i);
        i += 5;
    } while (i<=100);

    i = 0;

    //Bai2
    printf("\n\n2. Square 5x5\n");
    while (i<5)
    {
        printf("*****\n");
        i++;
    }
    i = 0;

    //Bai3
    printf("\n\n3. Identity Matrix \n");
    Identity(4);

    return 0;
}

int Identity(int num)
{
    int row, col;
     
    for (row = 0; row < num; row++)
    {
        for (col = 0; col < num; col++)
        {
            if (row == col)
                printf("%d ", 1);
            else
                printf("%d ", 0);
        }
        printf("\n");
    }
    return 0;
}