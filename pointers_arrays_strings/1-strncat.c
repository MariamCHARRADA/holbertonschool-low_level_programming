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
