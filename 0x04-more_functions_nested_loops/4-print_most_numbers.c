#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9 without 2 and 4
 * @i: number to be printed
 * Return: void
 */
void print_most_numbers(void)
{
	int i;
	
	while (i == 0 || i ==1 || i == 3 || i >= 5 || i <= 9 )
	{
		_putchar(i);
	}
	_putchar('\n');
}
