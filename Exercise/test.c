#include <stdio.h>
#include <string.h>

int main()
{
    int n = 3, m = 7;
    int p1 = &n, p2 = &m;
    p1 -= m + n - 3*(m);
    p2 += p1 % 2 ? 2 : 5;
    printf("%d", m - n);
}