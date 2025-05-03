#include <stdio.h>

/**
* main - program that prints all possible combinations of two two-digit numbers
*
* Return: (0) Always Successful
*/

int main(void)
{
int outer, inner;

outer = 0;

while (outer <= 99)
{
inner = outer + 1;

while (inner <= 99)
{
putchar((outer / 10) + '0');
putchar((outer % 10) + '0');
putchar(' ');
putchar((inner / 10) + '0');
putchar((inner % 10) + '0');

if (outer != 98 || inner != 99)
{
putchar(',');
putchar(' ');
}
inner++;
}
outer++;
}
putchar('\n');
return (0);
}
