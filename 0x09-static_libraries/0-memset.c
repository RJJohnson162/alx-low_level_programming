#include "main.h"

/**
 * _memset - Function fills memory with constant byte
 * @s: parameter with constant byte
 * @b: parameter pointing to memory area
 * @n: no. of bytes in memory area
 * Return: gives (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
