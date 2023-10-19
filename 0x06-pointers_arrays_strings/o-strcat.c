#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first character
 * @src: another chracter
 *
 * Return: ponter to a char
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src !='\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
