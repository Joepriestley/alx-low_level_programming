#include "main.h"
/**
 * _abs - checks and returns absolute value
 * @n: parameter for absolute value
 * Return: returns 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
	{
		return (n);
	}
	return (0);


}
