#include "main.h"

/**
 * _memcpy - copies one memory to another
 * @dest: memory destination
 * @src: pointer t memory destination
 * @n: number of memory to be copied
 * Return: retutns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);


}
