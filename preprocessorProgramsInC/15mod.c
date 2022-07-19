// DEFINED OPERATOR

#include<stdio.h>
#include "12.h"

int main(void)
{
#ifdef sum
	int a, b;

	printf("enter values of a and b: ");
	scanf("%d%d", &a, &b);

	printf("\n\n%d + %d = %d\n\n", a, b, sum(a, b));
#endif

#ifndef hello
	printf("\n\nmacro hello was not defined!!\n\n");

#endif

	printf("\n\nend of main()\n\n\n");

	return 0;
}
