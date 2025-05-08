#include "main.h"

/**
  * _atoi - Convert a string to an integer
  * s: string to be converted to an integer
  *
  * Return: (int) the numbers in a string
  */

int _atoi(char *s)
{
	int i, sign, result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9') && (s[i] != '-' && s[i] != '+'))
	{
		i++;
	}

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
