#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
/*	int len = strlen(s); */

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		 _putchar(*s);
	}
}
