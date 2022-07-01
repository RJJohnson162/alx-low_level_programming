#include <stdio.h>

/**
 * main - prints the size of the various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("size of a char: %c byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %d byte(s)\n", sizeof(long int));
printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
