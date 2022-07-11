#include<stdio.h>

#define MAX(fname, dtype)\
	dtype fname(dtype x, dtype y)\
{\
	return x>y?x:y;\
}

MAX(maxint, int)

void display();

int main(void)
{
	int a, b;

	printf("enter values of a and b: ");
	scanf("%d%d", &a, &b);

	int result;

	result=maxint(a, b);

	printf("\n\nthe maximum of %d and %d is %d\n\n", a, b, result);

	display();

	return 0;
}

#undef MAX

void display()
{
	int m, n;

	printf("\n\n\nINSIDE display()\n\n");
	printf("\n\nenter the values of m and n: ");
	scanf("%d%d", &m, &n);

	int result=maxint(m, n);
	printf("\n\nthe maximum of %d and %d is %d\n\n", m, n, result);


}
