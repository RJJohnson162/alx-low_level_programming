#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter
 * Return: give the length of the string
 */

int _strlen(char *s)
{
    int len;

    while (*s != '\0')
    {
        len += 1;
        *s = *s + 1;
    }
    return (len);
}
