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
	int i = strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
		strcpy(s, s1);
		i = strlen(s1);
		while (s2[i] != '\0')
		{
			s[i] = s2[i];
			i++;
		}
	s[i] = '\0';
	return (s);
}
