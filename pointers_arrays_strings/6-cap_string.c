#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: ptr to s
 */
char *cap_string(char *s)
{
	int i = 0;
	char *p = s;

	if (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
		s[i]  = s[i] - ('a' - 'A');
		}
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '	' || s[i] == '\n' || s[i] == ','
		|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"'
		|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		i++;
		}
	}
	return (p);
}
