#include "main.h"

/**
 * _islower - checks if character is lowercase
 *
 * @c: The character in ASCII
 *
 * Return: (1) for lowercase character. (0) for rest.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
