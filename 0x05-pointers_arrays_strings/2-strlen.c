#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string parameter
 * Return: give the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
