#include <stdio.h>

int main()
{
    int i, space, rows = 2, star = 0;

    /* In phân trên của hình thoi */
    for (i = 1; i <= rows; i++)
    {
        /* In khoảng cách để tam giác thường --> tam giác cần */
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        /* In dấu * thành hình tam giác */
        while (star != (2 * i - 1))
        {
            //Kiểm tra xem có phải điểm đầu và điểm cuối hay ko
            if (star == 0 || star == 2 * i - 2)
                printf("*");
            else //Để in tam giác rỗng thì sẽ ko in những vị trí ngoài IF
                printf(" ");
            star++;
        }
        star = 0;
        /* Mục đích xuống hàng */
        printf("\n");
    }
    rows--;
    /* In phân dưới của hình thoi - Đảo ngược lại phần trên */
    //Sửa If thôi
    for (i = rows; i >= 1; i--)
    {
        for (space = 0; space <= rows - i; space++)
        {
            printf(" ");
        }

        while (star != (2 * i - 1))
        {
            if (star == 0 || star == 2 * i - 2)
                printf("*");
            else
                printf(" ");
            star++;
        }
        star = 0;
        printf("\n");
    }

    return 0;
}