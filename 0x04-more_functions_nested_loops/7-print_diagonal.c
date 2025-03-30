#include "main.h"

/**
* print_diagonal - Draws a diagonal line
* @n: input
*/

void print_diagonal(int n)
{
	int row, column;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			row = 0;

			while (row < n)
			{
				column = 0;

				while (column <= n)
				{
					if (column == row)
					{
						_putchar('\\');
						break;
					}
					_putchar(' ');
					column++;
				}
				_putchar('\n');
				row++;
			}
		}
}
