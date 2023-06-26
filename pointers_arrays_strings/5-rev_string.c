#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse string
 * @s: parameter
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; i < (_strlen(s) / 2); i++)
	{
			s[i] = s[(_strlen(s) - i)];
	}
}
