#include <unistd.h>
#include "main.h"

/**
 * print_alphabet- Print alphabet in lowercase
 *
 * Return: (0) when successful
 */

void print_alphabet(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
