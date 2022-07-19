// CONDITIONAL COMPILATION!!!!

#include<stdio.h>
#include "12.h"
#define FLAG 5

int main(void)
{

#if FLAG>6
	int a;
	printf("enter a number: ");
	scanf("%d", &a);

	printf("\n\n%d square is %d\n\n", a, square(a));

#elif FLAG>4 && FLAG <6
	int h;
	printf("enter height: ");
	scanf("%d", &h);

	PascalT(h);

#else
	printf("\n\nNo operation!!!!\n\n");

#endif

	printf("\n\nEnd of main()\n\n\n");
	
	return 0;
}
