//Vo Tue Nam - CE140557
#include <stdio.h>
int gt(int n);
int combination();
int missingNumber();
int SeparateName();

int main()
{
    do
    {
        int a;
        printf("\n\n\nMENU");
        printf("\n1. Tính chỉnh hợp");
        printf("\n2. Tìm số bị thiếu trong mảng");
        printf("\n3. In ra họ và tên");
        printf("\n4. Thoát");
        printf("\n===> Input: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("Output: %d", combination());
            break;
        case 2:
            missingNumber();
            break;
        case 3:
            SeparateName();
            break;
        case 4:
            return 0;
        default:
            printf("\nInvalid Input\n");
            break;
        }
    } while (1);

    return 0;
}

/*
    Đầu vào là 2 số n và k
    Tính tổ hợp của k và n
*/
int combination()
{
    int n, k;
    printf("\nInput: ");
    scanf("%d %d", &k, &n);
    return gt(n) / (gt(k) * gt(n - k));
}

/*
    Đơn giản là tính giai thừa bằng đệ quy
*/
int gt(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return gt(n - 1) * n;
}

/*
    Tìm số tất cả các số bị thiếu trong khoảng đều cho

    Input: Min và Max để xác định khoảng
    N là số lượng phần tử của mảng đề cho
    mảng a[] sẽ nhận N phần tử người dùng nhập vào

    Output: Trả về những số bị thiếu 
*/
int missingNumber()
{
    int min, max, n, i, j;
    printf("\nInput: \n");
    scanf("%d %d", &min, &max);
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //Kiểm tra những số trùng trong mảng đề cho và lưu vào 1 mảng khác
    int re[n], k = 0;
    for (i = min; i <= max; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == a[j])
            {
                re[k++] = a[j];
                break;
            }
        }
    }

    printf("\nOutput: ");
    int c = 0, haha = 0;
    //Do cả 2 mảng đem so sánh đều được sắp xếp tăng dần nến cứ so sánh từ đầu đến cuối
    for (i = min; i <= max; i++)
    {
        //Kiếm tra nếu không trùng thì ra
        if (i != re[c])
        {
            printf("%d ", i);
            //biến đếm để in ra none
            haha++;
        }
        //Nếu trùng thì kiểm tra số tiếp theo
        else
        {
            c++;
        }
    }

    //Nếu không còn số nào sót lại thì in ra none
    if (haha == 0)
    {
        printf("none");
    }

    return 0;
}

/*
    Đếm số lượng từ trong Input trước
    Trả về lỗi khi dùng nhập đầu vào không hợp lệ

    In FirstName và LasName lần lượt ra
*/
int SeparateName()
{
    char name[100], firstName[100], middleName[100], lastName[100];
    int i, k, f, m, j = 1;
    getchar();
    //Enter Input
    printf("\nInput: ");
    scanf("%[^\n]%*c", name);
    

    //Count word in this Input
    for (i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] == ' ') && (name[i + 1] != ' ') && (name[i + 1] != '\0'))
        {
            j++;
        }
        if ((name[i + 1] == ' ') && (name[i] == ' '))
        {
            printf("\nInvald Input");
            return 0;
        }
    }

    //If input invald -> Return 0
    if (name[0] == ' ')
    {
        printf("\nPlease dont Enter Space first!!!\n");
        return 0;
    }
    //If input invald -> Return 0
    if (j < 2 || j > 2)
    {
        printf("\nInvald Input");
        return 0;
    }
    else
    {
        //Print char between 2 spaces
        printf("\nFirst name: ");
        for (i = 0; name[i] != '\0'; i++)
        {
            if (name[i] == ' ')
            {
                break;
            }
            printf("%c", name[i]);
        }

        //Print char between 2 spaces
        printf("\nLast name: ");
        for (k = i + 1; name[k] != '\0'; k++)
        {
            if (name[k] == ' ')
            {
                break;
            }
            printf("%c", name[k]);
        }
    }

    return 0;
}