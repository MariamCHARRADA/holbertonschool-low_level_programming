#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
	putchar('\n');
	i++;
	}
}
