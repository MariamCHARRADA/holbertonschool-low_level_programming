#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: dest
 * @src: src
 * Return: ptr to dest
 */
char *_strcat(char *dest, char *src)
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
