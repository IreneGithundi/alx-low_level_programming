#include "main.h"

/**
  * print_line - Draws a staright line in the terminal
  * @n: input that draws the line
  *
  */

void print_line(int n)
{
	int count;

	count = 1;

	while (count <= n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
