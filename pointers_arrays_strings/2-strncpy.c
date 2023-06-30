#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
