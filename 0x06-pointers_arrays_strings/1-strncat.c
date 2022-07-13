#include "main.h"

/**
 * _strncat - appends the src string to the dest string
 * @src: src string
 * @dest: dest string
 * @n: most bytes from src string
 * Return: give pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
