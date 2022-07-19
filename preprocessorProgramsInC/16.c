#include<stdio.h>

int main(void)
{
	printf("%s\n", __TIME__);
	printf("%s\n", __DATE__);
	printf("%s\n", __FILE__); // shows file name which is, in this case, "16.c"
	printf("%d\n", __LINE__); // shows the current line number(which is, in this case, 8)

	return 0;
}
