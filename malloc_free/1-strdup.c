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

	if (str == NULL)
		return (NULL);
	s = malloc((strlen(str) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
