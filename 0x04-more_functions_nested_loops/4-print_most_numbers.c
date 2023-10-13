#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 without 2 and 4
 * @i: number to be printed
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++;)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
