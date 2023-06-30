#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * Return: ptr
 */
char *string_toupper(char *s)
{
	int i;
	char *ptr = s;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	i++;
	}
	return (ptr);
}
