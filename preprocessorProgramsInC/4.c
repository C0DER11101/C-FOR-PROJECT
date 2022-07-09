// NESTING IN MACROS!!!!!

#include<stdio.h>
#define NUMBER 2
#define SQUARE NUMBER*NUMBER


int main(void)
{
	printf("\nMacro NUMBER = %d", NUMBER);

	printf("\n\nMacro SQUARE = %d\n\n", SQUARE);
	return 0;
}
