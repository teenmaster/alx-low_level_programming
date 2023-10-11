#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This program will assign a random number
 * to the variable n each time it is executed
 *
 * Return: 0 shows success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d", n, "is %d and is greater than 5", n);
	}
	else if (n ==  0)
	{
		printf("Last digit of %d", n, "is %d and is 0", n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d", n, "is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
