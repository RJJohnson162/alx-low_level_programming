#include "main.h"

/**
 * main - prints 0 to 100 when executed
 * Description: prints Fizz for multiples of 3,
 * Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 15 == 0)
			printf("FizzBuzz");
		else if (d % 3 == 0)
			printf("Fizz");
		else if (d % 5 == 0)
			printf("Buzz");
		else
			printf("%i", d);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}