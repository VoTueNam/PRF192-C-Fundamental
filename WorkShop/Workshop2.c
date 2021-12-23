//Vo Tue Nam - CE140557
#include <stdio.h>

int main(){
    allWork();
}

/*
    Mô tả bài toán:
    Gom Menu co 4 options de Giang Vien lua chon
    1. In ra 10 so le dau tien co su dung For + ...?...:...
    2. In ra 10 so le dau tien co su dung While + If + Break + continue
    3. In ra hinh luoi nhen - duoc ki hieu bang *
    4. In ra hinh luoi nhen - duoc trinh bay dep hon
    
    Giải thuật:
    Cho vong lap Do - While de lap lai Menu cho toi khi user chon 0 để exit
    Giai thuat tung menu vao swtich case de xem cu the
*/
int allWork()
{
    do //Nhớ check input đầu vào hợp lệ
    {
        int n, i, star,m;
        printf("\nMENU\n");
        printf("\n1. Print 10 odd number (1->19) with For + ...?...:...");
        printf("\n2. Print 10 odd number (1->19) with While + if else + Break + Continue");
        printf("\n3. Draw Star with * (Ex 2)");
        printf("\n4. Draw Star with \\ / | X -");
        printf("\n0. Exit program");
        printf("\n =====> Enter your choose: ");

        
        scanf("%d", &n);
        if(n<0||n>100){
            n = 6;
        }

        switch (n)
        {
        case 0:
            return 0; //exit program

        case 1:
            //Cho i lap lai 20 lan, moi lan i tang 1 don vi
            //Trong vong lap dung ...?...:... đe check dieu kien la i lẻ đe in ra
            printf("\n------------\n");
            for (i = 1; i <= 20; i++)
            {
                (i % 2 == 1) ? printf("%d ", i) : printf("");
            }
            printf("\n===========\n");
            break;

        case 2:
            //Cho While lap vô hạn toi khi i bằng 21 thì sẽ thoát vòng lặp vô hạn (bằng break)
            //Check điêu kiện nêu I le số chăn thi lặp lại vòng lặp bằng continue
            //Truong hop con lai thi in ra thoi (Tat nhien la so lẻ)
            printf("\n------------\n");
            i = 1;
            while (1)
            {
                if (i == 21)
                {
                    break;
                }
                printf("%d ", i);
                i += 1;
                if (i % 2 == 0)
                {
                    i += 1;
                    continue;
                }
            }

            printf("\n===========\n");
            break;

        case 3:
            printf("\n------------\n");
            printf("\nEnter size of Star: ");
            scanf("%d", &star);
            printStar1(star);
            printf("\n===========\n");
            star = 0;
            break;

        case 4:
            printf("\n------------\n");
            printf("\nEnter size of Star: ");
            scanf("%d", &star);
            printStar2(star);
            printf("\n===========\n");
            star = 0;
            break;
        default:
            //Nếu nguoi dung nhập kí tự ngoài Menu thì thông báo và cho người dùng nhập lại
            printf("Invalid Input - Enter again");
            break;
        }
    } while (1);
    return 0;
}

/*
    Giai thuat 
    Cho 2 vong for lap lai
    Lan luot check dieu kien cho cac duong cheo, duong thang va duong ngang
*/
int printStar1(int n)
{
    int size = n * 2 + 1;
    int mid = n + 1;
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            //Check condition: top left -> bottom right
            if (i == j)
            {
                printf("* ");
            }
            //check condition: top right -> bottom left
            else if (i + j == 2 * n + 2)
            {
                printf("* ");
            }
            //check condition: line in the middle
            else if (j == mid)
            {
                printf("* ");
            }
            //check condition: line in the middle
            else if (i == mid)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        //New line
        printf("\n");
    }

    return 0;
}

/*
    Giai thuat
    Tuong tu Fucntion o tren chi thay cac dau * thanh ki hieu tuong ung
*/
int printStar2(int n)
{
    int size = n * 2 + 1;
    int mid = n + 1;
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            //Print X
            if (i == j && i == mid)
            {
                printf("X ");
            }
            /* print \\ */
            else if (i == j)
            {
                printf("\\ ");
            }
            //print /
            else if (i + j == 2 * n + 2)
            {
                printf("/ ");
            }
            //print |
            else if (j == mid)
            {
                printf("| ");
            }
            //print -
            else if (i == mid)
            {
                printf("- ");
            }
            //print space
            else
            {
                printf("  ");
            }
        }
        //print new line
        printf("\n");
    }

    return 0;
}