//Vo Tue Nam - CE140557
#include <stdio.h>
#include <string.h>

/*
    Input: Ma tran 3x3 giong ban co Caro
    Output: 
        - X win neu X co 3 diem thang hang truoc
        - O win neu O co 3 diem thang hang truoc
        - Continue playing: neu ban co van chua full
        - The end: neu van chua ai win va ban co da full

    Giai thuat:
    Kiem tra tung dieu kien thang:
    - Thang bang:
            + Duong thang dung
            + Duong nam ngang
            + 2 Duong cheo

*/
int main()
{
    char s[3][3];
    int i, j, cout = 0;
    int X = 0, O = 0;
    

    //Input ma tran 3x3
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %c", &s[i][j]);
            if (s[i][j] == '-')
            {
                cout++;
            }
        }
    }

    //Check 3 duong ngang va 3 duong thang
    for (i = 0; i < 3; i++)
    {
        if (s[i][0] == 'X' && s[i][1] == 'X' && s[i][1] == 'X')
        {
            X = 1;
        }
        if (s[i][0] == 'O' && s[i][1] == 'O' && s[i][1] == 'O')
        {
            O = 1;
        }
        if (s[0][i] == 'X' && s[1][i] == 'X' && s[2][i] == 'X')
        {
            X = 1;
        }
        if (s[0][i] == 'O' && s[1][i] == 'O' && s[2][i] == 'O')
        {
            O = 1;
        }
    }
    //Check 2 duong cheo tu trai sang phai
    if (s[0][0] == 'O' && s[1][1] == 'O' && s[2][2] == 'O')
    {
        O = 1;
    }
    if (s[0][0] == 'X' && s[1][1] == 'X' && s[2][2] == 'X')
    {
        X = 1;
    }

    //Check 2 duong cheo tu phai sang trai
    if (s[0][2] == 'O' && s[1][1] == 'O' && s[2][0] == 'O')
    {
        O = 1;
    }
    if (s[0][2] == 'X' && s[1][1] == 'X' && s[2][0] == 'X')
    {
        X = 1;
    }

    //In ra output
    if (X == 1)
    {
        printf("\nX win.");
    }
    else if (O == 1)
    {
        printf("\nO win.");
    }
    else if (cout != 0)
    {
        printf("\nContinue playing.");
    }
    else
    {
        printf("\nThe end.");
    }
    return 0;
}