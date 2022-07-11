// ERROR PROGRAM!!!!!

#include<stdio.h>

#define MAX(fname, dtype)\
	dtype fname(dtype x, dtype y)\
{\
	return x>y?x:y;\
}

void display();

MAX(maxint, int)

int main(void)
{
	int a, b;

	printf("enter values of a and b: ");
	scanf("%d%d", &a, &b);

	int result;

	result=maxint(a, b);

	printf("\n\nMaximum of %d and %d is %d\n\n", a, b, result);
	display();
	return 0;
}


#undef MAX


void display()
{
	printf("\n\nInside display()\n\n");
	int m, n;


	printf("enter values of m and n: ");
	scanf("%d%d", &m, &n);

	MAX(maxint, int) // throws an error!!!

	int result;
	result=maxint(m, n);

	printf("\n\nMaximum of %d and %d is %d\n\n", m, n, result);

}
