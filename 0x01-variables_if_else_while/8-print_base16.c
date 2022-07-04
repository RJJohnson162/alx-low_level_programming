#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it's executed
 * and print the last digit of the number stored in the variables n
 * Return: always 0
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}

return (0);
}
