#include "main.h"

/**
  * _strrncpy - Function that copies n bytes of a string
  * @dest: string that string will be copied to
  * @src: string that characters will be copied from
  * @n: Number of characters to be copied
  *
  * Return: (dest) New String with overwritten/copied new characters
  */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
