#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - Checks if number is negative, positive, or zero
* @n: the number that is to be checked
*
* Return: Always 0 (Success)
*/

void positive_or_negative(int n) {
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
}
