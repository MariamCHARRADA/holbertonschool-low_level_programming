#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (i * i <= n)
	{
		if (i * i == n)
			return (i);
		_sqrt_recursion(i + 1);
	}
	return (-1);
}
