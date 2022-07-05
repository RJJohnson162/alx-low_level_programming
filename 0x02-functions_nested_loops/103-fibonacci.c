#include "main.h"
#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
int d = 1, e = 2, total = 0;
int f;

while (e < 4000000)
{
if (e % 2 == 0)
total += e;

f = e;
e += d;
d = f;
}
printf("%d\n", total);

return (0);
}
