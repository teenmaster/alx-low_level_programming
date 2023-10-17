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

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	j = length - 1;
	for (i = 0; j >= length && i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
