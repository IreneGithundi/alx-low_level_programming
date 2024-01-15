#include <unistd.h>
#include "main.h"

/**
 * print_times_table- Print the n times tabl starting with 0
 * @n: the input number
 * Return: null
 */

void print_times_table(int n)
{
	int r, c, result;

	if (n <  0 || n > 15)
		_putchar('\n');
	else
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			
			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');
				
				result = r * c;
				
				if (result >= 0 && result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}	
				
				if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
				}

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result /10) % 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
