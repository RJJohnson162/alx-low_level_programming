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

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 0)
{
printf("and isgreater than s");
}
if (n == 0)
{
printf("and is 0");
}
if (n < 6 && n != 0)
{
printf("and is less than 6 not 0");
}
printf("\n");
return (0);
}
