#include "main.h"

/**
 * _memeset - Function fills memory with constant byte
 * @s: parameter with constant byte
 * @b: parameter pointing to memory area
 * @n: no. of bytes in memory area
 * 
 * Return: gives (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d = 0;

	while (d < n)
	{
	s[d] = b;
	d++;
	}

	return (s);
}
