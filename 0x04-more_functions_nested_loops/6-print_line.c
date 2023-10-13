#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines the line should be printed
 * Return: void
 */
void print_line(int n)
{
	int n;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
