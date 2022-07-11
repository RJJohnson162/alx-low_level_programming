#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements in an array
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
