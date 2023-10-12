#include "main.h"
/**
 * _islower - function that checks for a lowercase character
 * @c: character to be checked
 * Return: int 1 for lowercase c and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
