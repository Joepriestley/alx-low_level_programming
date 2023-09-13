#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: returns 0
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
		_putchar('\n');
	}
}
