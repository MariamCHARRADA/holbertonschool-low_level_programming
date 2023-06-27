#include "main.h"
#include <string.h>
/**
 * puts_half - print half a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, h;

	h = strlen(str) - 1;
	if (h % 2 == 0)
	{
		for (i = h / 2; i <= h; i++)
	{
		 _putchar(str[i]);
	}
	_putchar('\n');
	}
	else
	{
		for (i = (h + 1) / 2; i <= h; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	}
}
