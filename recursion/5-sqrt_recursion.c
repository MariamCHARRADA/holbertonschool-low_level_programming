#include "main.h"
/**
 * test - test
 * @i: count
 * Return: i or -1
 */
int test(int i, int  n)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (test(i + 1, n));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	int i = 1;

	return (test(i, n));
}
