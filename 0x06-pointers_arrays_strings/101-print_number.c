#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = n;

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
