#include "main.h"

/**
 * print_times_table - Print times table from 0 to n
 * @n: input number (end of column)
 *
 * Return: void
 */

void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{
		int row;

		row = 0;

		while (row <= n)
		{
			int column;

			column = 0;
			
			while (column <= n)
			{
				int product;

				product = row * column;

				if (product <= 9)
				{
					if (column > 0)
					{
					_putchar(' ');
					_putchar(' ');
					}
					_putchar(product + '0');
				}
				if (product >=10 && product <= 99)
				{
					if (column > 0)
					{
						_putchar(' ');
					}
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				if (product >= 100 && product <= 999)
				{
					_putchar((product / 100) + '0');
					_putchar(((product % 100) / 10) + '0');
					_putchar((product % 10) + '0');
				}
				if (column < n)
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
}
