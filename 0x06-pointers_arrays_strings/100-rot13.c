#include "main.h"

/**
 * *rot13 - A Function that encodes a string using rot13
 * @s: The string to be encoded
 * Return: A Char pointer
 */

char *rot13(char *s)
{
	char *start = s;
	int index = 0;

	while (s[index] != '\0')
	{
		for (; ((s[index] >= 'A') && (s[index] <= 'Z')); index++)
		{
			s[index] = 'A' + (s[index] - 'A' + 13) % 26;
		}

		if ((s[index] >= 'a') && (s[index] <= 'z'))
		{
			s[index] = 'a' + (s[index] - 'a' + 13) % 26;
		}
		index++;
	}

	return (start);
}
