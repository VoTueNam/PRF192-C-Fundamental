//Vo Tue Nam - CE140557
#include<stdio.h>

/*
    Input: 
        - Kiem tra dau vao la mot so nguyen
    Output:
        - Tra ve ket qua xem so do co phai Armstrong number hay khong
*/
int main()
{
    int n, r, sum = 0, temp;
    // printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    //Tinh tong can bac ba 
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("It's Armstrong number ");
    else
        printf("It's not Armstrong number");
    return 0;
}