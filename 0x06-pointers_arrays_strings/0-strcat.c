#include "main.h"

/**
  * _strcat- Concatenates two strings
  * @dest: string 1
  * @src: string 2
  * Return: 1 (a character)
  */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
