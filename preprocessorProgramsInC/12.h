#define sum(x, y)  ((x)+(y))
#define square(x) ((x)*(x))
#define mult(x, y) ((x)*(y))
#define sub(x, y) (x)>(y)?((x)-(y)):((y)-(x))

int nCr(int n, int r)
{
	int factn=1, factr=1, factdiff=1, diff;

	diff=sub(n, r);

	/* --- n! --- */
	for(int i=n; i>0; i--)
	{
		factn*=i;
	}

	/* --- r! --- */
	for(int i=r; i>0; i--)
	{
		factr*=i;
	}

	/* --- (n-r)! --- */
	for(int i=diff; i>0; i--)
	{
		factdiff*=i;
	}

	return (factn/(factr*factdiff));
	 
}

void PascalT(int h)
{
	printf("\n\nThe pascal's triangle is:\n\n");
	for(int i=0; i<h; i++)
	{
		for(int j=0; j<=i; j++)
			printf("%d ", nCr(i, j));
		printf("\n");
	}

}
