#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int n = 0;

	for (; n < 10 ; n++)
	{
		putchar('0' + n);
	if (n != 9)
	{
		putchar(',');
		putchar(' ');
	}
	else
	{
		putchar('\n');
	}
	}
return (0);
}
