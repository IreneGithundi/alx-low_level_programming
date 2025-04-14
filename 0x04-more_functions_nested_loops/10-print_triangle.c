#include "main.h"

/**
  * print_triangle - Prints a Triangle
  * @size: input size of the triangle
  */

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}

	row = 1;

	while (row <= size)
	{
		space = size;

		while (space > row)
		{
			_putchar(' ');
			space--;
		}
		hash = 1;

		while (hash <= row)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		row++;
	}

}
