#include <stdio.h>
/**
 * main - it is the main block of code 
 *
 * Return: returns 0 with success 
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",sizeof(char));
	printf("Size of an int: %lu byte(s)\n",sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",sizeof(long int));
	prinf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",sizeof(float));
	return (0);
}
