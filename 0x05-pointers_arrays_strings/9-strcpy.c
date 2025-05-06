#include "main.h"

/**
  * _strcpy - Copies *src string to *dest
  * @src: string to be pointed to
  * @dest: pointer that will handle the copy
  * Return: (dest)
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
