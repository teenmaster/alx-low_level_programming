#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 if > 0, 0 == 0 && -1 < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
