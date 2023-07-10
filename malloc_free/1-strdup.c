#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string given as a parameter
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	char *s;
	char tmp;

	s = malloc(strlen(str) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i != '\0')
	{
		tmp = str[i];
		s[i] = str[i];
		str[i] = tmp;
		i++;
	}
	return (s);
}
