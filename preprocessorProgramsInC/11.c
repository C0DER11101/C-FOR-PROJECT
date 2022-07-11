// TOKEN PASTING OPERATOR!!!

#include<stdio.h>
#define paste(a, b) a##b


int main(void)
{
	int a1;
	printf("enter value of a1: ");
	scanf("%d", &paste(a, 1));

	printf("\nValue is = %d", paste(a, 1));

	return 0;
}
