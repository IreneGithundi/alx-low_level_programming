#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10- Prints the  alphabet 10*
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0; i < 10; i++)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

	}
}
