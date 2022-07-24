#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: largest number of bytes
 * Return: give dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while (b < n && *(src + b))
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	if (b < n)
		*(dest + a) = *(src + b);
	return (dest);
}
