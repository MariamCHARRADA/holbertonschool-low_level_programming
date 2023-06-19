#include <stdlib.h>
#include <time.h>
/*
 * main - entry point
 * if n<0 - n is negative
 * if n>0 - n is positive
 * is n=0 - n is zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(n, "is positive\n");
	}
	else if (n < 0)
		{
		printf(n, "is negative\n");
		}
	else
	{
		printf(n, "is zero\n");
	}

	return (0);
}
