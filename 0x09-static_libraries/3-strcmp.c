#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string3
 * @s2: string2
 * Return: give the difference of the 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
