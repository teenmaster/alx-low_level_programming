#include <stdio.h>
/**
 * main - prints the size of each data type
 *
 * Description: A C program that prints the size of various types on the computer it is compiled and run on.
 *
 * Return: success is shown by a 0
 */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", (int) sizeof(char));
	printf("Size of an int: %d bytes(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
	return (0);
}
