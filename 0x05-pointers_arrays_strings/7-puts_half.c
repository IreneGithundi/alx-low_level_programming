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
		for ( i = length / 2; *str != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	else 
	{
		for (n = ((length - 1) / 2); n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
