#include "main.h"

/**
 * factorial - gets factorizl of a number n
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int factorial(unsigned int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * (n - 1));
	}
}
