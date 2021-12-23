//Võ Tuệ Nam - CE140557
#include <stdio.h>

/*
Hiểu:
- Nhập vào một số có 3 chữ số
- Đầu ra yêu cầu là số lớn nhất tạo được từ 3 chữ số đó

Giải thuật:
- Tách số có 3 chữ số đó ra thành từng số lẻ và lưu vào 1 array
- Sort array đó theo thứ tự giảm dần
- In ra màn hình array đó theo thứ tự để thu được số có giá trị lớn nhất
*/


int main(void)
{
    int x[3];
    int i, j, a;
    int number;
    // Nhập 1 số có 3 chữ số
    int input = scanf("%d", &number);

    //Bổ sung - Kiểm tra đầu vào của người dùng
    if(input!=1){
        printf("Invalid input... please enter a AAAA integer number  ");
    }else if(number < 100 || number > 999){
        printf("Invalid input... please enter a 3-digit integer number: ");
        return 0;
    }

    // Tách các chữ số đó ra lưu vào mảng
    x[2] = number % 10;
    number = (number - x[2]) / 10;
    x[1] = number % 10;
    number = (number - x[1]) / 10;
    x[0] = number;

    // Dùng 2 vòng lặp để sort mảng theo thứ tự giảm dần
    for (i = 0; i < 3; ++i)
    {
        for (j = i + 1; j < 3; ++j)
        {
            if (x[i] < x[j])
            {
                a = x[i];
                x[i] = x[j];
                x[j] = a;
            }
        }
    }

    //In kết quả ra màn hình
    printf("Result %d%d%d.\n", x[0], x[1], x[2]);
    return 0;
}

