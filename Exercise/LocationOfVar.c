#include <stdio.h>
int main()
{
    int a,b;
	float c,d;
	double e,f;

    printf("Enter 2 integer numbers: a, b: ");
    scanf("%d %d", &a, &b);

    printf("Enter 2 float numbers: c, d: ");
    scanf("%f %f", &c, &d);

    printf("Enter 2 double numbers: e, f: ");
    scanf("%lf %lf", &e, &f);

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %f\n", c);
    printf("Value of d: %f\n", d);
    printf("Value of e: %f\n", e);
    printf("Value of f: %f\n", f);

	printf("Address of a: %p\n", &a);
	printf("Address of b: %p\n", &b);
	printf("Address of c: %p\n", &c);
    printf("Address of d: %p\n", &d);
	printf("Address of e: %p\n", &e);
	printf("Address of f: %p\n", &f);

	return 0;
}

