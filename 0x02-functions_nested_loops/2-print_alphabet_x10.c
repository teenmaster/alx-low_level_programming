#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 * void - no return value
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
		i++;
	}
}
