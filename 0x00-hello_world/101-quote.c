#include <unistd.h>

/**
 * main - Entry Point
 * write - Write to file descriptors
 * Return: Always 1 (As required)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
