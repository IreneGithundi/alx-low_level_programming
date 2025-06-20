#include "main.h"
#include <string.h>

/**
 * *cap_string - Capitalizes all the words of a string
 * @s: The strig whose words are to be capitalized
 * Return: A char *
 */

char *cap_string(char *s)
{
	const char *separators = " \t\n,;.!?\"(){}";
	char *start = s;
	int word = 1;

	while (*s != '\0')
	{
		if (strchr(separators, *s) != NULL)
		{
			word = 1;
		}

		else if (word && *s >= 'a' && *s <= 'z')
		{
			*s -= 32;
			word = 0;
		}

		else
		{
			word = 0;
		}
		s++;
	}
	return (start);
}
