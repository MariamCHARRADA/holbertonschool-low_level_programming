#include "main.h"
/**
 * print_alphabet - entry point
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int n = 0;

	for (; n < 10; n++)
	{
		for (; ch <= 'z'; ch++)
		{	_putchar(ch);
		}
	_putchar('\n');
	}
}
