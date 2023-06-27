#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: parameter
 */
void rev_string(char *s)
{
	int i;
	char tmp;
	int h = strlen(s) - 1;

	for (i = 0; i < h; i++)
	{
			tmp = s[i];
			s[i] = s[h];
			s[h] = tmp;
			h--;
	}
}
