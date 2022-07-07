#include "main.h"

/**
 * print_diagonal - printing diagonal in the terminal
 * @n: input variable
 * Return: void
 */

void print_diagonal(int n)
{
	int h, w;

	if (n <= 0)
		_putchar('\n');
	for (h = 0; h < n; h++)
	{
		for (w = 0; w < h; w++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
