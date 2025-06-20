#include "main.h"

/**
 * *cap_string - Capitalizes all the words of a string
 * @s: The strig whose words are to be capitalized
 * Return: A char *
 */

char *cap_string(char *s)
{
	char *start = s;
	int word = 1;

	while (*s != '\0')
	{
		if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' ||
		*s == ';' || *s == '.' || *s == '!' || *s == '?' || *s == '"'
		|| *s == '(' || *s == ')' || *s == '{' || *s == '}')
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
