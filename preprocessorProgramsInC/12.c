#include<stdio.h>
#include "12.h"

int main(void)
{
	int h;

	printf("\n\nenter height: ");
	scanf("%d", &h);

	printf("\n\nsquare of 2 is %d\n\n", square(2));

	PascalT(h);

	printf("\n\nDifference of 100 and 10 is %d\n\n", sub(10, 100));


	printf("\n\n10C2 is %d\n\n", nCr(10, 2));

	return 0;
}
