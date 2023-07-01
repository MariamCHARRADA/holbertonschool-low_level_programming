#include "main.h"
#include <ctype.h>
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int j, i = 0;
	char *s1, *s2;

	s1 = "aeotl";
	s2 = "43071";
	while (s[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (s[i] == s1[j] || s[i] == toupper(s1[j]))
			{
				s[i] = s2[j];
			}
		j++;
		}
	i++;
	}
	return (s);
}
