#include "main.h"

/**
  * puts2 - Prints every other character with a string
  * starting with the first character
  * @str: string to be printed
  */
void puts2(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
