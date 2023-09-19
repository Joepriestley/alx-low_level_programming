#include "main.h"

/**
 * _strlen - counts a string
 * @s: the string to be counted
 * Return: returns 0
 */

int _strlen(char *s)
{
	int a;
	int i = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		i++;
	return (i);

}
