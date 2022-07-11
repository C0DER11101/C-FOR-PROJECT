#include<stdio.h>
#define show(var, format) printf(#var" = %"#format, var)


int main(void)
{
	float a=100;

	show(a, .3f);

	printf("\n\n");

	int b=12;

	show(b, 4d);
	printf("\n\n");

	return 0;
}
