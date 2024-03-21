#include "main.h"

/**
  * string_toupper- Converts lowercase to uppercase
  * @str: the input string
  * Return: An upper character
  */
char *string_toupper(char *str)
{
	char *start = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (start);
}
