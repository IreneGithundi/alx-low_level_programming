#include <stdio.h>

 /**
  * main - Entry Point
  * @a: First Number
  *
  * Description: Print all numbers between 0 and 9
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
	printf("%d", a);
	a++;
	}
	printf("\n");
	return (0);
}
