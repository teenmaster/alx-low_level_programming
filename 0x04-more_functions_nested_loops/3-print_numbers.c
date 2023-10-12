#include "main.h"

/**
 * print_numbers - prints 0 to 9 followed by a new line
 * @void: return values will not be included  in the curly braces
 */
void print_numbers(void)
{
	int a;

	while ( a >= 48 && a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar("\n");
}
