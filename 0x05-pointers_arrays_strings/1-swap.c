#include "main.h"

/**
 * swap_int - interchanges two values of integers
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
