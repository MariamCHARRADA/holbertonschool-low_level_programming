#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: dest
 * @src: src
 * @n: parameter
 * Return: ptr to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src <= n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
