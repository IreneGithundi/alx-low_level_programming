#include "main.h"

/**
  * rev_string - Function that prints a string and its reverse
  * @s: The string to be printed
  */

void rev_string(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
