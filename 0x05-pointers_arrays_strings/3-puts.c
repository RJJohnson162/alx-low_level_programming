#include "main.h"

/**
 * _puts - this is a function that puts
 * @str: parameter
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
