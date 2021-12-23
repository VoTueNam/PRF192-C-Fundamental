#include <stdio.h>
int P, R, F;
int main()
{
    system("cls");
    do
    {
        char n;
        getchar();
        printf("\n\nMenu");
        printf("\n1. PT 1 an");
        printf("\n2. PT 2 an");
        printf("\n3. Ghi file");
        printf("\n4. Doc file");
        printf("\n5. Xoa bo nho");
        printf("\n6. Exit");
        printf("\n===> Your choose: ");
        scanf("%c", &n);
        switch (n)
        {
        case '1':
            printf("Menu1");
            //menu1();
            break;
        case '2':
            printf("Menu2");
            //menu2();
            break;
        case '3':
            printf("\nChi ap dung cho phuong trinh bac 2 - 1 an");
            printf("\n === Noi dung trong file se mat ===");
            // printf("\n ===> Lua chon (Y/N): ");
            // // char p;
            // // scanf("%c", &p);
            // // if (p == 'Y' || p == 'y')
            // // {
            // int a, b, c;
            // printf("\nNhap a,b,c: ");
            // scanf("%d %d %d", &a, &b, &c);
            // ghiFile(a, b, c);
            //     break;
            // // }
            // // else if (p == 'N' || p == 'n')
            // // {
            // //     printf("\nReturn Menu");
            // //     break;
            // // }
            // // else
            // // {
            // //     printf("\nInvalid Input case 3");
            // //     break;
            // // }

            break;

        case '4':
            printf("\nChi ap dung cho phuong trinh bac 2 - 1 an");
            // docFile();
            printf("\n=============\n");
            break;

        case '5':
            printf("\nDa xoa bo nho thanh cong");
            P = 0;
            R = 0;
            F = 0;
            break;

        case '6':
            return 0;

        default:
            //system("cls");
            //getchar();
            printf("\nInvalid Input\n");
            break;
        }
    } while (1);
}

int docFile()
{
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
        if (c <= '9' && c >= '0')
        {
            s[k] = s[k] * 10 + (int)(c - 48);
        }
        else if (c == ' ')
        {
            k++;
        }
    }
    P = s[0];
    R = s[1];
    F = s[2];
    printf("\nDoc file thanh cong\n");
    printf("a= %d, b = %d, c = %d", P, R, F);
    fclose(f1);
    return 0;
}

int ghiFile(int a, int b, int c)
{
    FILE *f;
    f = fopen("Data/file.txt", "w"); //write

    if (f == NULL)
    {
        printf("Error");
        return 0;
    }
    fprintf(f, "%d ", a);
    fprintf(f, "%d ", b);
    fprintf(f, "%d", c);
    fclose(f);
    printf("\nGhi file thanh cong");
    return 0;
}