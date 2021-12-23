//Vo Tue Nam - CE140557

#include <stdio.h>
float Cong(float a, float b);
float Tru(float a, float b);
float Nhan(float a, float b);
float Chia(float a, float b);

/*
    Mo ta bai toan
    - Menu chinh co 2 chuc nang
        - In ra bang cuu chuong
        - Thuc hien phep tinh Cong Tru Nhan Chia 2 so
    - Nếu chọn 3 thì thoát chương trình

    Giai thuat:
    - Su dung printf để in ra Menu
    - Scanf để lựa chọn các Options
    - Nếu lựa chọn hợp lệ thì sẽ vào các menu con, 
        Khi menu con kết thúc công việc sẽ quay lại menu chính
    - Sử dụng Switch case để điều hướng lựa chọn của người dùng
    - Nếu người dùng nhập đầu vào ko hợp lệ (không bắt trường hợp nhập khác số nguyên):
        - Thì in lại Menu cho người dùng chọn lại
*/
int main()
{
    do
    {
        int n;
        printf("\n===========");
        printf("\nMenu MAIN");
        printf("\n1. Cuu Chuong");
        printf("\n2. Toan + - * /");
        printf("\n3. Thoat");
        printf("\n===> Your options: ");
        scanf("%d", &n);
        printf("===========\n");
        switch (n)
        {
        case 1:
            CuuChuong();
            break;
        case 2:
            Caculator();
            break;
        case 3:
            printf("\n===========\n");
            printf("THANK YOU FOR USING - SEE YA!!!");
            printf("\n===========\n");
            return 0;

        default:
            printf("\n===========\n");
            printf("Invalid Input - Try Again!");
            printf("\n===========\n");
            break;
        }

    } while (1);
}

/*
    MENU con thứ NHẤT
    In ra Menu Cuu chuong cho người dùng lựa chọn
    1. Thì cho người nhập 1 số từ 1 tới 10
        - Nếu nhập hợp lệ thì in ra bảng cửu chương của số đó
        - Nếu nhập ko hợp lệ thì báo lỗi và quay lại Menu Chính
    2. In ra toàn bộ bảng cửu chương của 10 số từ 1 đến 10
    Nếu người dùng nhập đầu vào khác 1 và 2 thì quay lại Menu CHÍNH
*/
int CuuChuong()
{
    int n, number, i, j;
    printf("\nMENU CuuChuong:\n");
    printf("\n1. Print CuuChuong a number.");
    printf("\n2. Print all CuuChuong from 1 to 10");
    printf("\n===> Your options: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\n===========\n");
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number < 1 || number > 10)
        {
            printf("\nOnly accept number 1 to 10 - Exit module!");
            break;
        }
        for (i = 1; i <= 10; i++)
        {
            printf("\n%d x %d = %d", number, i, number * i);
        }
        printf("\n===========\n");
        break;
    case 2:
        printf("\n===========\n");
        for (j = 1; j <= 10; j++)
        {
            printf("\n===========\n");
            printf("\nNumber %d", j);
            for (i = 1; i <= 10; i++)
            {
                printf("\n%d x %d = %d", j, i, j * i);
            }
        }
        break;
    default:
        printf("\n===========\n");
        printf("Input Invalid - Exit programs!!!");
        printf("\n===========\n");
        return 0;
    }
}

/*
    MENU con thứ HAI
    In ra Menu Cong Tru Nhan Chia cho người dùng lựa chọn
    1. Cho nguoi dung nhap 2 số thực - và in ra màn hình kết quả phép CỘNG
    2. Cho nguoi dung nhap 2 số thực - và in ra màn hình kết quả phép TRỪ
    3. Cho nguoi dung nhap 2 số thực - và in ra màn hình kết quả phép NHÂN
    4. Cho nguoi dung nhap 2 số thực - và in ra màn hình kết quả phép CHIA
        - Nếu số bị chia bằng 0 thì thoát và quay lại Menu CHÍNH
    Nếu người dùng nhập đầu vào khác 1,2,3,4 thì quay lại menu chính

*/
int Caculator()
{
    int n;
    float a, b;
    printf("\nMENU Caculator");
    printf("\n1. Plus");
    printf("\n2. Minus");
    printf("\n3. Multi");
    printf("\n4. Divide");
    printf("\nYour option: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        Nhap(&a, &b);
        printf("\n===========\n");
        printf("\n%.2f + %.2f = %.2f", a, b, Cong(a, b));
        printf("\n===========\n");
        break;
    case 2:
        Nhap(&a, &b);
        printf("\n===========\n");
        printf("\n%.2f - %.2f = %.2f", a, b, Tru(a, b));
        printf("\n===========\n");
        break;
    case 3:
        Nhap(&a, &b);
        printf("\n===========\n");
        printf("\n%.2f x %.2f = %.2f", a, b, Nhan(a, b));
        printf("\n===========\n");
        break;
    case 4:
        Nhap(&a, &b);
        printf("\n===========\n");
        if (b == 0)
        {
            printf("\nCannot divide for 0 !!!!");
            return 0;
        }
        printf("\n%.2f / %.2f = %.2f", a, b, Chia(a, b));
        printf("\n===========\n");
        break;

    default:
        printf("\n===========\n");
        printf("Input Invalid - Exit programs!!!");
        printf("\n===========\n");
        return 0;
    }
    return 0;
}
//Thực hiện nhập 2 số thông qua con trỏ
int Nhap(float *a, float *b)
{
    printf("\nEnter a,b = ");
    scanf("%f %f", a, b);
    return 0;
}
//Thực hiện phép cộng 2 số và trả về kết quả
float Cong(float a, float b)
{
    return a + b;
}
//Thực hiện phép trừ 2 số và trả về kết quả
float Tru(float a, float b)
{
    return a - b;
}
//Thực hiện phép nhân 2 số và trả về kết quả
float Nhan(float a, float b)
{
    return a * b;
}
//Thực hiện phép chia 2 số và trả về kết quả
float Chia(float a, float b)
{
    return a / b;
}