#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, i, j;
	char temp;

	length = s;
	for (i = 0; j = length -1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		str[j] = temp;
	}
}
