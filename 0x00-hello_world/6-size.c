#include<stdio.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 4;
	int c = 4;
	int d = 8;
	int e = 4;

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", e);
	return (0);
}
