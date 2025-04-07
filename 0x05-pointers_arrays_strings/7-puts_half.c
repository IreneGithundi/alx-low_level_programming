#include "main.h"
/**
  * puts_half - Prints half of a string
  * @str: string that is to be printed half
  */
void puts_half(char *str)
{
	int count, number, half;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	number = count;

	if ((number % 2) == 0)
	{
		half = number / 2;
		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
	else
	{
		half = (number - 1) / 2;

		while (str[half] != '\0')
		{
			_putchar(str[half]);
			half++;
		}
		_putchar('\n');
	}
}
