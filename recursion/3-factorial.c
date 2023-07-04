#include "main.h"
/**
 * factorial - returns the factorial of n
 * @n: parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (factorial(n - 1));
}
