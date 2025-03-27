#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet lowercase 10 times
 *
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	int a;

	a = 1;

	while (a <= 10)
	{
		char letter;

		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		a++;
	}
}
