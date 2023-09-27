#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @c: Function parameter
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
	if (s[t] == c)
	return (s + t);
	}
	return (0);
}

