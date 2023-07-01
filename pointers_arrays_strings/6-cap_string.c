#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: ptr to s
 */
char *cap_string(char *s)
{
	int i = 0;
	char *p = s;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '	' || s[i] == '\n' || s[i] == ','
		|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
		}
	s[i] = toupper(s[i]);
	i++;
	}
	return (p);
}
