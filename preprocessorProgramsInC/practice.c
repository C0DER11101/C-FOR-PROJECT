#include<stdio.h>
#include "functions.h"

int main(void)
{
	int a, b, c;
	greet();

	printf("\n\nenter three numbers(num1-num2-num3): ");
	scanf("%d-%d-%d", &a, &b, &c);

	int result=maxint(a, b, c);

	printf("\n\nlargest among %d, %d and %d is %d\n\n", a, b, c, result);

	printf("\n\n%d x %d = %d\n\n",a, b, mult(a, b));
	return 0;
}
