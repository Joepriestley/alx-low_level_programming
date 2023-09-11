#include <stdio.h>
/**
 * main - main code
 *
 * Return: returns (0)
 */
int main(void)
{
	int a;
	int i;

	for (a = 28 ; a <= 36 ; a++)
	{
		for (i = 29 ; i <= 37 ; i++)
		{
			putchar(a);
			putchar(i);
			if (a != 36 || i != 37)
			{
				putchar(',');
				putchar(' ');

			}
		}

	}
	putchar('\n');
	return (0);
}
