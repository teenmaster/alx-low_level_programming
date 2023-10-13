#include "main.h"

/**
 * print_triangle - prints a triangle, then a new line
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, indent;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (indent = size - row; indent >= 1; indent--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
