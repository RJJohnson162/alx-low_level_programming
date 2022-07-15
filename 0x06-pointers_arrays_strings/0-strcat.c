#include "main.h"

/**
 * _strcat - appeding two strings together
 * @dest: string parameter
 * @src: string parameter
 * Return: give the address of the dest string
 */

char *_strcat(char *dest, char *src)
{
    int a, b;

    a = b = 0;
    while (*(dest + a))
    a++;
    while ((*(dest + a) = *(src + b)))
    {
        a++;
        b++;
    }
    return (dest);
}
