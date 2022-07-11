#include "main.h"
#include <string.h>

/**
 * puts2 - printing to stdout
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
int len, a;
len = strlen(str);
for (a = 0; a < len; a += 2)
_putchar(str[a]);
_putchar('\n');
}
