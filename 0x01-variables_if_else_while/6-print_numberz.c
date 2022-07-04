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
int ch;
for (ch = 0; ch <= 9; ch++)
{
printf("%d", ch);
}
putchar(10);

return (0);
}