#include "main.h"

/**
 * _isalpha -> checks if the alphabet is lower case
 * @c: a character argument
 * Return: returns 1 and 0 depending on the condition
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
