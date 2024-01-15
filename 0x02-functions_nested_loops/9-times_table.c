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
		_putchar('0'); /* Ensures that the first row is 0*/

		for (y = 1; y <= 9; y++)
		{
			_putchar(','); /* Prints a , and space after 0*/
			_putchar(' ');

			result = x * y;

			if (result <= 9)
				_putchar(' '); /* Single digit requires additional space for proper formatting*/
			else
				_putchar((result / 10) + '0'); /*Prints the 10s part*/
			_putchar((result % 10) + '0'); /*Prints the ones part*/
		}
		_putchar('\n');
	}
}
