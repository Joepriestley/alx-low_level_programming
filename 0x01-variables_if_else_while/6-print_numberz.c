#include <stdio.h>
/**
 * main - main block of code
 *
 * Return: returns (0) for success
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);

}
