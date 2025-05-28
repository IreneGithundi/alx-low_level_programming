#include "main.h"

/**
 * *string_toupper - Function that chnages lowercase letters
 * of a string to uppercase
 * @str: String whose lowercase letters are changed to uppercase
 * Return: a pointer to a character.
 */

char *string_toupper(char *str)
{
	char *start = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return (start);
}
