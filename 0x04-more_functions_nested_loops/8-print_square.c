#include "main.h"

/**
  * print_square - Prints square
  * @size: size of the square
  */

void print_square(int size)
{
	int length, width;

	if (size <= 0)
	{
		_putchar('\n');
	}

	length = 0;

	while (length < size)
	{
		width = 0;

		while (width < size)
		{
			_putchar('#');
			width++;
		}
		_putchar('\n');
		length++;
	}
}
