#include "main.h"
#include <math.h>
/**
 * test - test prime numbers
 * @i: count
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */
int test(int i, int n)
{
	if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	return (test((i + 1), n));
}
/**
 * is_prime_number - returns 1 if input int is a prime number, else 0
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (test(i, n));
}
