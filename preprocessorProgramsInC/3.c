// parameterized macros

#include<stdio.h>
#define SUM(x, y) ((x)+(y))

int main(void)
{
	int x=10, y=20;

	printf("Calling macro for %d + %d....\n\n%d\n\n", x*2, y*10, SUM(x*2, y*10));

	return 0;
}
