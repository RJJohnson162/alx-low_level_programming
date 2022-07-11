#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	a = a - 1;
	while (a >= 0)
	{
		_putchar(*(s + a));
		a--;
	}
	_putchar('\n');
}
