#include <string.h>

/**
  * _strlen- Returns length of a string
  * @s: The string to be checked
  * Return: length
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length += length;
	}

	return (length);
}
