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

	for (a = 48 ; a <= 56 ; a++)
	{
		for (i = 49 ; i <= 57 ; i++)
		{
			putchar(a);
			putchar(i);
			if (a != 56 || i != 57)
			{
				putchar(',');
				putchar(' ');

			}
		}

	}
	putchar('\n');
	return (0);
}
