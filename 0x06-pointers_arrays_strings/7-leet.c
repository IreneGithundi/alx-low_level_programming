#include "main.h"

/**
 * *leet - A Function that encodes a string to 1337
 * @s: string that is to be encoded
 * Return: A Char pointer
 */

char *leet(char *s)
{
	char *start = s;
	char letter[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int index;


	while (*s != '\0')
	{
		for (index = 0; index < 10; index++)
		{
			if (*s == letter[index])
			{
				*s = encode[index];
			}
		}
		s++;
	}
	return (start);
}
