// DEFINED OPERATOR!!!

#include<stdio.h>
#include "12.h"


int main(void)
{

#if defined(sum)
	int a, b;

	printf("\nenter values of a and b: ");
	scanf("%d%d", &a, &b);

	printf("\n\n%d + %d is %d\n\n", a, b, sum(a, b));

#elif defined(square)
	int a;

	printf("enter value of a: ");
	scanf("%d", &a);

	printf("\n\n%d square is %d\n\n", a, square(a));

#else
	printf("\n\nno operation!!!\n\n");

#endif

	printf("\n\nend of main()\n\n\n");
	

	return 0;
}
