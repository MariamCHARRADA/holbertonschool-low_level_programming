#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memoryreturns a pointer to a newly allocated space in memory
 * @str: the string given as a parameter
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;

	s = malloc(strlen(str) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
