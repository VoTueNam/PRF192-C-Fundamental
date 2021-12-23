//Vo Tue Nam - CE140557

#include <stdio.h>
#include <string.h>
int palindrome();
int contiguous();
int capitalizeFullName();

/*Menu Swith Case
1. Balance number
2. Longest equal contiguous numbers
3. Reformat the full name to capitalize 
4. Exit
*/
int main()
{
    do
    {
        int c;
        printf("\nMENU: ");
        printf("\n1. Balance number");
        printf("\n2. Longest equal contiguous numbers ");
        printf("\n3. Reformat the full name to capitalize");
        printf("\n4. Exit");
        printf("\n==> Your choose: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            palindrome();
            break;
        case 2:
            contiguous();
            break;
        case 3:
            capitalizeFullName();
            break;
        case 4:
            printf("\n =====EXIT====\n");
            return 0;
        default:
            printf("\n =====Invalid Input====\n");
            break;
        }
        printf("\n=============\n");
    } while (1);
}

//Kiem tra xem co đúng là số này có palindrome hay không
int palindrome()
{
    int c;
    printf("\nInput: ");
    scanf("%d", &c);
    //Kiểm tra đầu vào hợp lệ
    if (c < 100 || c > 1000)
    {
        printf("Invalid input");
        return 0;
    }
    int dau = c / 100;
    int sau = c % 10;
    //Kiểm tra 2 số đầu và đuôi
    if (dau == sau)
    {
        printf("Answer: Yes");
    }
    else
    {
        printf("Answer: No");
    }
    return 0;
}

//Tìm số xuất hiện liên tiếp nhiều lần nhất trong mảng được nhập vào
int contiguous()
{
    int c, i, a, j, max = 1, dem = 1;
    printf("\nInput: ");
    scanf("%d", &c);
    //Kiểm tra đầu vào hợp lệ
    if (c < 0 || c > 100)
    {
        printf("Invalid input");
        return 0;
    }
    //Nhập mảng
    int arr[c];
    printf("==> Enter Array: ");
    for (i = 0; i < c; ++i)
    {
        scanf("%d", &arr[i]);
    }

    //Tìm số lần xuất hiện nhiều nhất giữa 2 phần tử liên tiếp
    for (i = 0; i < c - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            dem++;
            if (dem > max)
            {
                max = dem;
            }
        }
        else
        {
            dem = 1;
        }
    }

    //In mảng ra
    printf("Answer Max = %d\n", max);
    // for (i = 0; i < c; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    return 0;
}

//Nhập vào 1 chuổi bất kỳ, trả về chuỗi Có chữa cái đầu in hoa mỗi từ
int capitalizeFullName()
{
    char name[50];
    int i;
    printf("\nEnter Full name: ");
    getchar();
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
    {
        //Kiểm tra kí tự đầu tiên
        if (i == 0)
        {
            if ((name[i] >= 'a' && name[i] <= 'z'))
                name[i] = name[i] - 32; //Chuyển từ lowerCase sang UpperCase
            continue;                   //Quay lại vòng lặp
        }
        if (name[i] == ' ') //kiểm tra khoảng trắng
        {
            //Nếu tìm thấy khoảng trắng -> đi tới kí tự kế tiếp
            ++i;
            //Kiểm tra xem kí tự kế tiếp có viết thường hay ko, nếu có thì UpperCase
            if (name[i] >= 'a' && name[i] <= 'z')
            {
                name[i] = name[i] - 32; //Chuyển từ lowerCase sang UpperCase
                continue;               //Quay lại vòng lặp
            }
        }
        else
        {
            //Kiểm tra các kí tự còn lại ngoài kí tự đầu và cái nào In hoa thì chuyển nó thành in thường
            if (name[i] >= 'A' && name[i] <= 'Z')
                name[i] = name[i] + 32; //Chuyển từ UpperCase sang lowerCase
        }
    }
    printf("\nAnswer: %s", name);
    return 0;
}