#include <stdio.h>
/**
 * main - main code block
 *
 * Return: returns 0 for success
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');

	return (0);
}
