#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int ch = 'a', n = 0;

	for (; n <= 9; n++)
		putchar('0' + n);
	for (; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

return (0);
}
