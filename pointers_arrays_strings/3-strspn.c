#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix string
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		n++;
		i++;
	}
	return (n);
}
