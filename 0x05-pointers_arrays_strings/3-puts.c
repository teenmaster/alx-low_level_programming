#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;
	char a;

	while (str[len] != '\0')
	{
		a = str[len];
		_putchar(a);
		len++;
	}
	_putchar('\n');
}
