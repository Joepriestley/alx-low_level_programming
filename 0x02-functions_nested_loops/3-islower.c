#include "main.h"

/**
 * _islower - prints lowercase values
 * @c: parameter
 * Return: returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
