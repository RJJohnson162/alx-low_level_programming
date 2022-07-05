#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int n = 1;
	int total = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
			total += n;
		else if (n % 5 == 0)
			total += n;

		n++;
	}
	printf("%d\n", total);

	return (0);
}
