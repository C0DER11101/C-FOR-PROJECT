// CONDITIONAL COMPILATION!!!

#include<stdio.h>
#include "12.h"
#define FLAG 1


int main(void)
{
#if FLAG!=0
	int h;
	printf("enter height: ");
	scanf("%d", &h);

	PascalT(h);

#endif

	printf("\nEnd of main()\n\n\n");

	return 0;
}
