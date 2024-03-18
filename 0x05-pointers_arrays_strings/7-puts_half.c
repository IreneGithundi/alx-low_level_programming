#include "main.h"

/**
  * puts_half- Prints half of a string
  * @str: Input string
  */

void puts_half(char *str)
{
	int length = 0;
	int n, i;

	while (*str != '\0')
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		for ( i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	else 
	{
		n = (length - 1) / 2;

		for (i = n / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
