/*
    Group 6
    ===== Assignment PRF192 ====

    Intructor
        Le Thi Thu Lan

    Member:
        Vo Tue Nam      | CE140557
        Truong Hoai Nam | CE161034
        Nguyen Tien Dai | CE150672
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535898

int menu1();
int menu2();
int docFile();
int ghiFile(int a, int b, int c);
int ptB1(int a, int b);
int ptB2(int a, int b, int c);
int ptB3(int a, int b, int c, int d);
int hpt(int a1, int b1, int c1, int a2, int b2, int c2);
int ptnt(int a, int b, int c);

int P, R, F;

/*
    Main Menu
    system("cls") --> Clear console
*/
int main()
{
    system("cls");
    printf("Enter to continue!");
    do
    {
        char n;
        getchar();
        printf("\n\nMenu");
        printf("\n1. PT 1 an");
        printf("\n2. PT 2 an");
        printf("\n3. Ghi file");
        printf("\n4. Doc file");
        printf("\n5. Xem bo nho");
        printf("\n6. Xoa bo nho");
        printf("\n7. Exit");
        printf("\n===> Your choose: ");
        scanf("%c", &n);
        switch (n)
        {
        case '1':
            menu1();
            break;
        case '2':
            menu2();
            break;
        case '3':
            system("cls");
            printf("\nGHI FILE - Chi ap dung cho PT bac 2 - 1 an");
            printf("\n === Noi dung trong file se mat ===");
            getchar();
            printf("\n ===> Lua chon (Y/N): ");
            char p;
            scanf("%c", &p);
            if (p == 'Y' || p == 'y')
            {
                int a, b, c;
                printf("\nNhap a,b,c: ");
                scanf("%d %d %d", &a, &b, &c);
                ghiFile(a, b, c);
            }
            else if (p == 'N' || p == 'n')
            {
                printf("\nReturn Menu");
            }
            else
            {
                printf("\nInvalid Input case 3");
            }

            break;

        case '4':
            system("cls");
            printf("\nDOC FILE - Chi ap dung cho PT bac 2 - 1 an\n");
            docFile();
            printf("\n=============\n");
            break;

        case '5':
            system("cls");
            printf("\nXem bo nho:");
            printf("\na = %d\nb = %d\nc = %d\n", P, R, F);
            break;

        case '6':
            system("cls");
            printf("\nDa xoa bo nho thanh cong");
            P = 0;
            R = 0;
            F = 0;
            break;

        case '7':
            return 0;

        default:
            //system("cls");
            printf("\nInvalid Input\n");
            break;
        }
    } while (1);
}

/*
    Menu 1
*/
int menu1()
{
    do
    {
        //system("cls");
        char n;
        getchar();
        printf("\n=============\n");
        printf("\nMenu PT 1 an");
        printf("\n1. PT: \n--- | ax + b = 0");
        printf("\n2. PT: \n--- | ax2 + bx +c = 0");
        printf("\n3. PT: \n--- | ax3 + bx2 +cx +d = 0 ");
        printf("\n4. Return");
        printf("\n===> Your choose: ");
        scanf("%c", &n);
        printf("\n=============\n");
        getchar();
        switch (n)
        {
        case '1':
            system("cls");
            printf("\nax + b = 0");
            printf("\n\n==> Input: ");
            int a, b;
            scanf("%d %d", &a, &b);
            ptB1(a, b);
            break;
        case '2':
            system("cls");
            //Neu da doc file thi khong can nhap
            if (P != 0 && R != 0 && F != 0)
            {
                printf("\n=== Nhan a, b, c tu file ===\n");
                ptB2(P, R, F);
            }
            //Neu chua doc file thi nhap input vao
            else
            {
                printf("\nax2 + bx + c = 0");
                printf("\n\n==> Input: ");
                int x, y, z;
                scanf("%d %d %d", &x, &y, &z);
                ptB2(x, y, z);
            }
            break;
        case '3':
            system("cls");
            printf("\nax3 + bx2 + cx + d = 0");
            printf("\n\n==> Input: ");
            int ax, bx, cx, dx;
            scanf("%d %d %d %d", &ax, &bx, &cx, &dx);
            ptB3(ax, bx, cx, dx);
            break;
        case '4':
            system("cls");
            return 0;
        default:
            system("cls");
            printf("\nInvalid Input\n");
            break;
        }
    } while (1);
}


/*
    Menu 2
*/
int menu2()
{
    do
    {
        //system("cls");
        char n;
        getchar();
        printf("\n=============\n");
        printf("\nMenu PT 2 an");
        printf("\n1. He phuong trinh: \n--- | a1x + b1y + c1 = 0 \n--- | a2x + b2y + c2 = 0");
        printf("\n2. Phuong trinh nghiem nguyen 2 an: \n--- | ax + by + c = 0");
        printf("\n3. Return");
        printf("\n===> Your choose: ");
        scanf("%c", &n);
        printf("\n=============\n");
        getchar();
        switch (n)
        {
        case '1':
            system("cls");
            printf("\na1x + b1y + c1 = 0");
            printf("\na2x + b2y + c2 = 0");
            printf("\n===> Input a1, b1, c1: \n");
            int a1, b1, c1;
            scanf("%d %d %d", &a1, &b1, &c1);
            printf("\n===> Input a2, b2, c2: \n");
            int a2, b2, c2;
            scanf("%d %d %d", &a2, &b2, &c2);
            printf("\n");
            hpt(a1, b1, c1, a2, b2, c2);
            break;
        case '2':
            system("cls");
            printf("\nax + by + c = 0");
            printf("\n\n==> Input: ");
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            ptnt(a, b, c);
            break;
        case '3':
            system("cls");
            return 0;
        default:
            system("cls");
            printf("\nInvalid Input\n");
            break;
        }
    } while (1);
}

/*
    Read a file
*/
int docFile()
{
    FILE *f1;
    char c;
    int s[3] = {0, 0, 0}, k = 0;
    f1 = fopen("Data/file.txt", "r");
    if (f1 == NULL)
    {
        printf("\nError --- This file not exit !!!\n");
        return 0;
    }
    while (1)
    {
        c = fgetc(f1);
        if (c == EOF)
        {
            break;
        }
        //Đọc file chỉ nhận những số cùng hàng và cách nhau bởi dấu cách
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

/*
    Write a file
*/
int ghiFile(int a, int b, int c)
{
    FILE *f;
    f = fopen("Data/file.txt", "w"); //write

    if (f == NULL)
    {
        printf("\nError write file\n");
        return 0;
    }
    fprintf(f, "%d ", a);
    fprintf(f, "%d ", b);
    fprintf(f, "%d", c);
    fclose(f);
    printf("\nGhi file thanh cong");
    return 0;
}

/*
    Phuong trinh bac 1
*/
int ptB1(int a, int b)
{
    printf("\nPT: %dx + %d = 0\n", a, b);
    if (a == 0 && b != 0)
    {
        printf("\n====== Vo nghiem ======\n");
    }
    else if (a == 0 && b == 0)
    {
        printf("\n====== Vo so nghiem ======\n");
    }
    else
    {
        printf("\nOutput: x = %.3f", ((float)(-b) / a));
    }
    return 0;
}

/*
    Phuong trinh bac 2
*/
int ptB2(int a, int b, int c)
{
    printf("\nPT: %dx2 + %dx + %d = 0\n", a, b, c);
    if (a == 0)
    {
        printf("\n====== Sai Dieu Kien ======\n");
        return 0;
    }
    double DT = b * b - 4 * a * c;
    double DTC = sqrt(DT);
    if (DT < 0)
    {
        printf("\n====== Vo nghiem ======\n");
    }
    else if (DT == 0)
    {
        printf("\nOutput: x1 = x2 = %.3f\n", ((float)(-b) / 2 * a));
    }
    else
    {
        double x1 = (-b + DTC) / (2 * (double)a);
        double x2 = (-b - DTC) / (2 * (double)a);
        printf("\nOutput: x1 = %.3lf , x2 = %.3lf\n", x1, x2);
    }
    return 0;
}

/*
    Phuong trinh bac 3
*/
int ptB3(int a, int b, int c, int d)
{
    printf("\nPT: %dx3 + %dx2 + %dx + %d = 0\n", a, b, c, d);
    float delta, k, x1, x2, x3, x0, x, X;
    delta = (float)pow(b, 2) - 3 * a * c;
    k = (float)(9 * a * b * c - 2 * pow(b, 3) - 27 * pow(a, 2) * d) / (2 * sqrt(fabs(pow(delta, 3))));
    if (delta > 0)
    {
        if (fabs(k) <= 1)
        { 
            x1 = (2 * sqrt(delta) * cos((acos(k) / 3)) - b) / (3 * a);
            x2 = (2 * sqrt(delta) * cos((acos(k) / 3 - (2 * PI / 3))) - b) / (3 * a);
            x3 = (2 * sqrt(delta) * cos((acos(k) / 3 + (2 * PI / 3))) - b) / (3 * a);
            printf("Output:\nx1 = %.2f\nx2 = %.2f\nx3 = %.2f", x1, x2, x3);
        }
        else
        {
            float x0 = ((sqrt(delta) * fabs(k)) / (3 * a * k)) * (pow(fabs(k) + sqrt(pow(k, 2) - 1), 1 / 3) + pow(fabs(k) - sqrt(pow(k, 2) - 1), 1 / 3)) - (b / (3 * a));
            printf("\nPT co nghiem duy nhat: %.2f", x0);
        }
    }

    if (delta == 0)
    {
        X = (-b + pow(pow(b, 3) - 27 * pow(a, 2) * d, 1 / 3)) / (3 * a);
        printf("\nPT co nghiem boi: %.2f", X);
    }
    if (delta < 0)
    {
        x = (sqrt(fabs(delta)) / (3 * a)) * (pow(k + sqrt(pow(k, 2) + 1), 1 / 3) + pow(k - sqrt(pow(k, 2) + 1), 1 / 3)) - (b / (3 * a));
        printf("\nPT co nghiem duy nhat: %.2f", x);
    }
    //getchar();
    return 0;
}

/*
    He phuong trinh bac nhất 2 ẩn
*/
int hpt(int a1, int b1, int c1, int a2, int b2, int c2)
{
    printf("\n%dx + %dy + %d =0", a1, b1, c1);
    printf("\n%dx + %dy + %d =0\n", a2, b2, c2);
    if ((a1 / a2) == (b1 / b2) && (a1 / a2) != (c1 / c2))
    {
        printf("\nVo nghiem");
        return 0;
    }

    if ((a1 / a2) == (b1 / b2) && (a1 / a2) == (c1 / c2))
    {
        printf("\nVo so nghiem");
        return 0;
    }

    float y = -((((float)a1 * c2) - (a2 * c1)) / ((a1 * b2) - (a2 * b1)));
    float x = -((float)c1 + b1 * y) / a1;

    printf("\nx = %.3f, y = %.3f\n", x, y);
}

//Kiểm tra và chỉ ra nghiệm nguyên
/*
    Phuong trinh bac 1 - nghiệm nguyên
*/
int ptnt(int a, int b, int c)
{
    printf("\nPT: %dx + %dy + %d = 0", a, b, c);
    float x, y, i = 0;
    if (a == 0 || b == 0)
    {
        //system("cls");
        printf("\nInvalid Input");
        return 0;
    }
    printf("\nOutput: ");
    for (x = 1; i < 10; x++)
    {
        y = ((float)(-c) / b) - (a * x / b);
        if (ceil(y) == floor(y))
        { //Nếu làm tròn lên và làm tròn xuống đều bằng nhau, chứng tỏ là số nguyên
            printf("\nx = %.f, y = %.f", x, y);
            i++;
        }
    }
    return 0;
}