#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: ptr to s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
		if (s[i] == accept[j])
			break;
		j++;
		}
		i++;
		return (NULL);
	}
	return (&s[i]);
}
