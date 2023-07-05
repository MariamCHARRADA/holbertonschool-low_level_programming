#include "main.h"
#include <math.h>
/**
 * is_prime_number - returns 1 if input int is a prime number, else 0
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (i * i <= n)
	{
		if (n % i == 0 && i != sqrt(n))
			return (1);
	is_prime_number(i + 1);
	}
	return (0);
}
