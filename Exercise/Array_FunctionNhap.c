#include <stdio.h>
void Nhap(int *a, int size);
void InArray(int *a, int size);
int findMax(int *a, int size, int maxx);
int findLocation(int *a, int size, int x);

int main()
{
    int n;
    printf("\nEnter N: ");
    scanf("%d", &n);
    int a[n];
    int sizeofA = sizeof(a) / sizeof(int);
    printf("Size of a = %d\n", sizeofA);
    Nhap(a,sizeofA);
    //InArray(a, sizeofA);

    int max1, max2, max3;
    max1 = findMax(a, sizeofA, 2147483647);
    max2 = findMax(a, sizeofA, max1);
    max3 = findMax(a, sizeofA, max2);
    printf("\nMax 1 = %d", max1);
    printf("\nMax 2 = %d", max2);
    printf("\nMax 3 = %d", max3);

    int x;
    printf("\nFind X - Enter value of X = ");
    scanf("%d", &x);
    int locateX = findLocation(a, sizeofA, x);
    if(locateX == -2147483647){
        printf("\nNot Found!!!\n");
    }else{
        printf("\nLocation of X = %d", locateX);
    }
    return 0;
}

void Nhap(int *a, int size)
{
    int i;
    
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
}

void InArray(int *a, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\na[%d] = %d", i+1, a[i]);
    }
}

int findMax(int *a, int size, int maxx){
    int i, max = a[0];
    for (i = 1; i < size; i++)
    {
        if(max<a[i] && a[i] < maxx){
            max = a[i];
        }
    }
    return max;
}

int findLocation(int *a, int size, int x){
     int i;
    
    for (i = 0; i < size; i++)
    {
        if(a[i]==x){
            return i+1;
        }
    }
    return -2147483647;
}