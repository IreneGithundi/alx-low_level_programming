#include "main.h"

/**
  * _strcat- Concatenates two strings
  * @dest: string 1
  * @src: string 2
  * Return: 1 (a character)
  */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}
