#include "main.h"
/**
 * add - add nums
 * @a: parameter
 * @b: parameter
 * Return: 0
 */
int add(int a, int b)
{
	int r = a + b;

	if (r >= 10)
	{
		_putchar('0' + (r / 10));
		_putchar('0' + (r % 10));
	}
	else
	{
		_putchar('0' + r);
	}
return (0);
}
