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
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = n % 10;
		_putchar(l + '0');
		return (l);
	}
}
