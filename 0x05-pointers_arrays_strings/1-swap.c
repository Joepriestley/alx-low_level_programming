#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first int value
 * @b: second int value
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
