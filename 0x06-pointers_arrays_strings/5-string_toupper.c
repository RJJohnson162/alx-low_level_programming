#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string parameter
 * Return: address of s
 */

char *string_toupper(char *s)
{
	int l = 0;

	while (*(s + l))
	{
		if (*(s + l) >= 'a' && *(s + l) <= 'z')
			*(s + l) -= 'a' - 'A';
		l++;
	}
	return (s);
}
