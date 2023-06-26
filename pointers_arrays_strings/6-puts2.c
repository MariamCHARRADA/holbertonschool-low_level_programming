#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints chars of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
		str[i] = i + 2;
}
