#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: string parameter
 * @c: character to be checked
 * Return: pointer to c in string s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
