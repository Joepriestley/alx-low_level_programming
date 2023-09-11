#include <stdio.h>
/**
 * main - main block
 *
 * Return: always (o)
 */
int main(void)
{
	char i;
	char m;

	for (i = 0 ; i < 10 ; i++)
		putchar(i);
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
