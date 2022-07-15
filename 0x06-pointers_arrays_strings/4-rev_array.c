#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, r;

	n = n - 1;
	while (i < n)
	{
		r = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = r;
		i++;
		n--;
	}
}
