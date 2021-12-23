#include <stdio.h>

int main()
{
    system("cls");
    int a = 1111, b = 2222, d = 3333;

    //Ghi file
    FILE *f;
    f = fopen("Data/file.txt", "w"); //write

    if (f == NULL)
    {
        printf("Error");
        return 0;
    }
    fprintf(f, "%d ", a);
    fprintf(f, "%d ", b);
    fprintf(f, "%d", d);
    fclose(f);

    //Doc file
    FILE *f1;
    char c;
    int s[3] = {0, 0, 0}, k = 0;
    f1 = fopen("Data/file.txt", "r");
    if (f1 == NULL)
    {
        printf("Error");
        return 0;
    }
    while (1)
    {
        c = fgetc(f1);
        if (c == EOF)
        {
            break;
        }
        // else
        // {
        //     printf("%d\n", (int)(c-48));
        // }
        if (c <= '9' && c >= '0')
        {
            printf("%d\n", (int)(c - 48));
            s[k] = s[k] * 10 + (int)(c - 48);
        }
        else if (c == ' ')
        {
            k++;
        }
    }
    printf("%d %d %d", s[0], s[1], s[2]);
    fclose(f1);
    return 0;
}