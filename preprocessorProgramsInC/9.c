// ERROR PROGRAM!!!

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
	MAX(maxint, int)

	int result;
	result=maxint(a, b);

	printf("\n\nThe maximum of %d and %d is %d\n\n", a, b, result);
	display();

	return 0;
}

#undef MAX

void display()
{
	printf("\n\nInside display()\n\n");

	
	int a, b;

	printf("\nenter values of a and b: ");
	scanf("%d%d", &a, &b);
	printf("\n\nCalling generic function!!!\n\n");

	int result;

	result=maxint(a, b);

	printf("\n\nThe maximum of %d and %d is %d\n\n", a, b, result);
}
