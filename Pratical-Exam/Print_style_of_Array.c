//Vo Tue Nam - CE140557
#include<stdio.h>

/*
    Input: 
    - Mot so la kich thuoc cua mang
    - 2 so tiep theo la thanh phan cua mang

    Output:
    - In ra noi dung cua mang theo yeu cau de bai
*/
int main(){
    int n,i,j;
    scanf("%d", &n);

    //Khai bao mang va nhap mang vao
    int s[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    //In ra theo yeu cau cua de bai
    for ( i = 0; i < n; i++)
    {
        printf("|");
        for ( j = 0; j < s[i]; j++)
        {
            printf("-");
        }
        
        printf("(%d)\n", s[i]);
    }
    return 0;
}
