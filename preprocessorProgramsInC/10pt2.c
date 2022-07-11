#include<stdio.h>

#define show(var) printf(#var"=%d\n", var)


int main(void)
{
	int a=10;
	show(a);
	return 0;
}
