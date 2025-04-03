#include "main.h"

/**
  * print_rev - Prints a string followed by a new line in reverse
  * @s: string to be printed in reverse
  */

void print_rev(char *s)
{
	int length, word_count;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for ((word_count = length - 1); word_count >= 0; word_count--)
	{
		_putchar(s[word_count]);
	}
	_putchar('\n');
}
