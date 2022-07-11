#include<stdio.h>

#define MAX(fname, dtype)\
	dtype fname(dtype x, dtype y)\
{\
	return x>y?x:y;\
}

void display();

int main(void)
{
	int a, b;

	printf("enter values of a and b: ");
	scanf("%d%d", &a, &b);

	int result;

	MAX(maxint, int);

	result=maxint(a, b);

	printf("\n\nthe maximum of %d and %d is %d\n\n", a, b, result);

	display();

	return 0;
}

void display()
{
	int m, n;

	printf("\nenter values of m and n: ");
	scanf("%d%d", &m, &n);

	MAX(maxint, int);

	int result=maxint(m, n);

	printf("\n\nthe maximum of %d and %d is %d\n\n\n", m, n, result);

}


#undef MAX
