//Vo Tue Nam - CE140557

#include <stdio.h>
int balanceNumber();
int studentHigherAve();
int consecutiveDuplicate();

int main()
{
    do
    {
        int a;
        printf("\n\nMENU");
        printf("\n1. Balance Number");
        printf("\n2. Percent Student higher score");
        printf("\n3. Consecutive Duplicate");
        printf("\n4. Exit");
        printf("\n===> Input: ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            balanceNumber();
            break;
        case 2:
            studentHigherAve();
            break;
        case 3:
            consecutiveDuplicate();
            break;
        case 4:
            return 0;
        default:
            printf("\nInput Invalid\n");
            break;
        }
    } while (1);
}

/*
    Input: một số nguyên có 4 chữ số
    Kiểm tra tổng 2 số đầu có bằng tổng 2 số sau hay không

    Output: Yes nếu điều kiện đúng
            No  nếu điền kiện sai
*/
int balanceNumber()
{
    int n;
    printf("\nInput: ");
    scanf("%d", &n);
    if (n < 1000 || n > 9999)
    {
        printf("\nInput Valid");
        return 0;
    }

    printf("\nOutput: ");
    int s1 = n % 10;
    int s2 = (n - s1) / 10 % 10;
    int s3 = (n - s1 - s2 * 10) / 100 % 10;
    int s4 = n / 1000;

    if (s1 + s2 == s3 + s4)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}

/*
    Tìm phần trăm số học sinh có điểm lớn hơn trung bình
    Input: mảng N phần tử, mỗi phần tử là điểm của 1 hs
    Output: % số học sinh có điểm lớn hơn trung bình
*/
int studentHigherAve()
{
    int stu, i;
    printf("\nInput: ");
    scanf("%d", &stu);
    int s[stu];
    int sizeofS = sizeof(s) / sizeof(int);

    //Nhập đầu vào mảng
    for (i = 0; i < sizeofS; i++)
    {
        scanf("%d", &s[i]);
    }

    //Tính tổng số điểm của sinh viên
    int summ = 0;
    for (i = 0; i < sizeofS; i++)
    {
        summ += s[i];
    }

    //Tính điểm trung bình
    float ava = summ / sizeofS;
    printf("\nsum = %d, ava = %.3f", summ, ava);

    //Điếm số học sinh có điểm hơn trung bình
    int cout = 0;
    for (i = 0; i < sizeofS; i++)
    {
        if (s[i] > ava)
        {
            cout += 1;
        }
    }

    //Tính % và in ra
    double result = (double)cout / sizeofS * 100;
    printf("\nOutput: %.3f", result);
    return 0;
}


/*
    Input: một chuỗi kí tự
    Output: 1 chuỗi kí tự đã được lược bỏ những kí tự trùng đứng kế nhau
*/
int consecutiveDuplicate()
{
    char name[100], i, k = 0;
    getchar();
    //Enter Input
    printf("\nInput: ");
    scanf("%[^\n]%*c", name);
    printf("\n");

    //Tạo 1 chuỗi mới, nhận lại output của đều bài
    char j[100];
    printf("\nOutput:\n");
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] != name[i + 1])
        {
            j[k++] = name[i];
        }
    }

    //In ra output theo yêu cầu đề bài
    for (i = 0; j[i] != '\0'; i++)
    {
        printf("%c", j[i]);
    }
    return 0;
}