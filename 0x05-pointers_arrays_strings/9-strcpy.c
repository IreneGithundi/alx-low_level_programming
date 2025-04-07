#include "main.h"

/**
  * _strcpy - Copies *src string to *dest
  * @src: string to be pointed to
  * @dest: pointer that will handle the copy
  * Return: (dest)
  */
char *_strcpy(char *dest, char *src)
{
	while (*src <= '\0');
	{
		*dest = *src;
		*src++;
		*dest++;
	}

	return (dest);
}
