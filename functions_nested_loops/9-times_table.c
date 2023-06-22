#include "main.h"
/**
 * times_table - 9 time table
 */
void times_table(void)
{
	int m, n, r;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			r = m * n;
			if (r >= 10)
			{
			
			_putchar('0' + (r / 10));
			_putchar('0' + (r % 10));
			}
			else
			{
			_putchar('0' + r);
			}
		if (m < 9)
		{
			if (m * (n + 1) < 10)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			else
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		}

	_putchar('\n');
	}

}
