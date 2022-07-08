#include<stdio.h>

// GLOBAL VARIABLES!!!
int a, b;
void f1();
void f2();
int main(void)
{
	a=10, b=20;
	f1();
	f2();
	return 0;
}


void f1()
{
	int a=100, b=900;
	printf("\ninside f1()\n\n");

	printf("\n\nThe values of a and b are %d and %d\n\n", a, b);

}

void f2()
{
	printf("\ninside f2()\n\n");
	printf("\n\nThe values of a and b are %d and %d\n\n", a, b);
}
