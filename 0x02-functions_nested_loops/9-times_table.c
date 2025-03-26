#include "main.h"

/**
 * times_table - Prints the 9 times table from 0
 *
 * Return: void
 */

void times_table(void)
{
	int row;

	row = 0;

	while (row <= 9)
	{
		int column;

		column = 0;

		while (column <= 9)
		{
			int product;

			product = row * column;

			if (product <= 9)
			{
				_putchar(product + '0');
			}

			else if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
				if (row <= 9 && column != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
