#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	strcpy(s, s1);
	i = strlen(s1);
	j = 0;		
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
