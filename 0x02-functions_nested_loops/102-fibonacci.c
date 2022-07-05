#include "main.h"
#include "stdio.h"

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
int count = 2;
long int d = 1, e = 2;
long int f;

printf("%lu, ", d);
while (count <= 50)
{
if (count == 50)
{
printf("%lu\n", e);
}
else
{
printf("%lu, ", e);
}
f = e;
e += d;
d = f;
count++;
}
return (0);
}
