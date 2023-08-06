#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int decimal = 0;

	while (b[i] == '1' || b[i] == '0')
	{
		decimal += b[i] * 2 ^ i;
		i++;
	}
	return (decimal);
}
