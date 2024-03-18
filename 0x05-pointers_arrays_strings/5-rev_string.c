#include "main.h"

/**
  * rev_string- Reverses a string
  * @s: String to be reversed
  * Return: void
  */

void rev_string(char *s)
{
	int length = 0;
	char *end = s;
	char *start = s;

	while (*end != '\0')
	{
		end++;
		length++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
