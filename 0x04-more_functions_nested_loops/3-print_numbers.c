#include "main.h"

/**
 * print_numbers - prints 0 to 9 followed by a new line
 *
 * Return: value 0
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');

}
