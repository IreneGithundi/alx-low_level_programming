#include "main.h"

/**
  * print_rev- Prints a reversed string then a new line
  * @s: The string to be reversed
  * Return: Void
  */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (*s != 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
