#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the first bytes to be copied
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = malloc((strlen(s1) + n) * sizeof(char));
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	j = strlen(s1);
	i = 0;
	while (i < n)
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
