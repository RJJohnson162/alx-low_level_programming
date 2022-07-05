#include "main.h"

/**
 * print_sign -> checks if the alphabet is lower case
 * @n: a character argument
 * Return: returns 1 and 0 depending on the condition
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}


}
