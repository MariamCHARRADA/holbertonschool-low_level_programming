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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc((strlen(s1) + strlen(s2) + 2) * sizeof(char));
	if (s1 && s2)
		s += *s1 + *s2;
	return (s);
}
