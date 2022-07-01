#include <stdio.h>

/**
 * main - prints the size of the various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("size of a char: %i bytes\n", sizeof(char));
printf("size of an int: %i bytes\n", sizeof(int));
printf("size of a long int: %i bytes\n", sizeof(long int));
printf("size of a long long int: %i bytes\n", sizeof(long long int));
printf("size of a float: %i bytes\n", sizeof(float));
return (0);
}
