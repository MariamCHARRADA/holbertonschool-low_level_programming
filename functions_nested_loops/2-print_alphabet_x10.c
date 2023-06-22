#include "main.h"
/**
 * print_alphabet_x10 - entry point
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int n;

	while (n < 10)
	{
	n = 0;
		for (; ch <= 'z'; ch++)
		{	_putchar(ch);
		}
	_putchar('\n');
	n++;
	}
}
