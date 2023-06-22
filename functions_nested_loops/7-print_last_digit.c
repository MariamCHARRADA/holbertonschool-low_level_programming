#include "main.h"
/**
 * print_last_digit - computes absolute value
 * @n: parameter
 * Return: n
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = (n * -1) % 10;
	}
	else
	{
		l = n % 10;
	}
return (l);
}
