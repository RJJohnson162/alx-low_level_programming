#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: string2
 * @src: string1
 * @n: no. of maximum bytes
 * Return: give dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
