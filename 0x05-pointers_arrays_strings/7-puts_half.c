#include "holberton.h"

/**
 * puts_half - prints the 2nd half of the string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
