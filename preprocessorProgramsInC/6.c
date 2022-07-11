// Generic functions

// SIMILAR TO IMPLEMENTING TEMPLATES IN C++

#include<stdio.h>
#define MAX(fname, dtype) \
	dtype fname(dtype x, dtype y) \
{\
	return x>y?x:y; \
}


MAX(maxint, int);
MAX(maxfloat, float);

int main(void)
{
	int p, q;
	float a, b;


	printf("enter value of p and q: ");
	scanf("%d-%d", &p, &q);

	printf("enter value of a and b: ");
	scanf("%f-%f", &a, &b);

	int result1;
	float result2;

	result1=maxint(p, q);
	result2=maxfloat(a, b);

	printf("\n\nThe maximum of %d and %d is %d\n\n", p, q, result1);
	printf("\n\nThe maximum of %.2f and %.2f is %.2f\n\n", a, b, result2);

	return 0;
}
