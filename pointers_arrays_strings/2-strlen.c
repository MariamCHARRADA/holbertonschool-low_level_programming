#include "main.h"
/**
 * _strlen - string length
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}
