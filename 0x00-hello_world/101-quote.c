#include <unistd.h>

/**
 * main - Prints a statement
 *
 * Description: Prints and ends on a new line
 *
 * Return: always a 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
