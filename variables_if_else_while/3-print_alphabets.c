#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int chl, chu;

	chl = 'a';
	chu = 'A';

	for (; chl <= 'z'; chl++)
		putchar(chl);
	for (; chu <= 'Z'; chu++)
		putchar(chu);
	putchar('\n');

return (0);
}
