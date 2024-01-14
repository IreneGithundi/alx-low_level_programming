#include <unistd.h>
#include "main.h"

/**
 * times_table- Prints the 9 times table from 0
 *
 * Return: null
 */

void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			result = x * y;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
