#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet using the _putchar function
 *
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
