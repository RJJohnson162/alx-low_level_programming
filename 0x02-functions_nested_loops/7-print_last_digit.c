#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int f;

	if (n < 0)
	{
		f = -1 * (n % 10);
		_putchar(f + '0');
		return (f);
	}
	else
	{
		f = n % 10;
		_putchar(f + '0');
		return (f);
	}
}
