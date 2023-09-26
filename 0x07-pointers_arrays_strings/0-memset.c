#include "main.h"

/**
 * _memset - deferernces the constant value
 * @s: first bytes constant
 * @b: the number of byte to the memmory with
 * @n: the number of byte to fill the memory
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
