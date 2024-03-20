#include "main.h"

/**
  * _strncpy- Copying a string
  * @dest: The destination
  * @src: The source of the string
  * @n: The total bytes to be written
  * Return: Always 1 (A character)
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (start);
}
