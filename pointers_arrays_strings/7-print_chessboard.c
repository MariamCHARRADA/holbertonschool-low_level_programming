#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 * @c: char input
 */
void print_chessboard(char (*a)[8], char c)
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			a[i][j] = c;
			j++;
		}
	i++;
	}
}
