#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: both lowercase and uppercase character being checked
 *
 * Return: 1 if c is both uppercase || lowercase and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
