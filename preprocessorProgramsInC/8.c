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

	printf("\n\nenter values of a and b: ");
	scanf("%d-%d", &a, &b);

	int result;
	MAX(maxint, int);
	result=maxint(a, b);
	printf("\n\nMaximum of %d and %d is %d\n\n", a, b, result);

	display();

	return 0;
}

void display()
{
	int a, b;

	printf("\n\nNow, withing display()\n\n");

	printf("\n\nenter values of a and b: ");
	scanf("%d-%d", &a, &b);

	int result;
	MAX(maxint, int);
	/* MAX(maxint, int); is replaced by its definition as

	   int maxint(int x, int y)
	   {
	   	return x>y?x:y;
	   }

	*/
	result=maxint(a, b);
	printf("\n\nMaximum of %d and %d is %d\n\n", a, b, result);
}
