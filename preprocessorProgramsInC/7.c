#include<stdio.h>

#define MAX(fname, dtype) \
	dtype fname(dtype x, dtype y)\
{\
	return x>y?x:y;\
}


void display();

int main(void)
{
	int a, b;

	printf("enter values of a and b: ");
	scanf("%d-%d", &a, &b);

	MAX(maxint, int)

	int result=maxint(a, b);

	printf("\n\nThe maximum of %d and %d is %d\n\n", a, b, result);

	display();

	return 0;
}

void display()
{
	int a, b;
	printf("\n\ncalling generic function from display()\n\n\n");

	printf("enter the values of a and b: ");
	scanf("%d=%d", &a, &b);

	int result=maxint(a, b); // throws an error!!!!
}
