#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: ptr to s
 */
char *cap_string(char *s)
{
	int i, j = 1;
	char *p = s;

	s[0] = toupper(s[0]);
	while (s[j] != '\0')
	{
		i = j - 1;
		if (s[i] == ' ' || s[i] == '	' || s[i] == '\n' || s[i] == ','
		|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			s[j] = toupper(s[j]);
		}
	/*s[i] = toupper(s[i]);*/
	j++;
	}
	return (p);
}
