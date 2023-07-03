#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 * @board: char input
 */
void print_chessboard(char (*a)[8], char board)
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			a[i][j] = board;
			j++;
		}
	i++;
	}
}
