#include "main.h"

/**
  * _isupper - Checks if character is Uppercase letter
  * @c: character input to be checked
  *
  * Return: (1) if uppercase (0) Otherwise.
  */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
