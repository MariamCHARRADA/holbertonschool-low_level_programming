#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int ch;

	ch = 'a';

	for (; ch <= 'z' ||  ch != 'q' || ch != 'e'; ch++)
		putchar(ch);
	putchar('\n');
return (0);
}
