// NESTED macros

#include<stdio.h>
#define ISLOWER(c) c>=97 && c<=122
#define TOUPPER(c) ISLOWER(c)==1? c-32:c

int main(void)
{
	char c;

	printf("enter a character: ");
	scanf("%c", &c);
	printf("\n\nThe upper case of %c is %c\n\n", c, TOUPPER(c));
	return 0;
}
