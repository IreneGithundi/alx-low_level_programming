#include "main.h"

/**
  * _strncat- Concatenates two strings
  * @dest: the fisrt input string
  * @src: the second input string
  * @n: an integer input
  * Return: Always 1 (returns a character string)
  */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;
	char *start = dest;

	while (*dest != '\0')
	{
		length++;
		dest++;
	}

	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
		*dest = src[i];
		dest++;
	}

	dest = '\0';

	return (start);
}
