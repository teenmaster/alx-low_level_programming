#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of ana array of integers, followed by a new
 * line and they must be in the order that they are stored in memory
 *
 * @a: integer array to be printed
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
