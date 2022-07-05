#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
unsigned long int r1 = 0, k1 = 1, r2 = 0, k2 = 2;
unsigned long int hold1, hold2, hold3;
int count;

printf("%lu, %lu, ", k1, k2);
for (count = 2; count < 98; count++)
{
if (k1 + k2 > LARGEST || r2 > 0 || r1 > 0)
{
hold1 = (k1 + k2) / LARGEST;
hold2 = (k1 + k2) % LARGEST;
hold3 = r1 + r2 + hold1;
r1 = r2, r2 = hold3;
k1 = k2, k2 = hold2;
printf("%lu%010lu", r2, k2);
}
else
{
hold2 = k1 + k2;
k1 = k2, k2 = hold2;
printf("%lu", k2);
}
if (count != 97)
printf(", ");
}
printf("\n");
return (0);
}
