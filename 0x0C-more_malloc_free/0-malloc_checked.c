/**
 * *malloc_checked - function name
 * @b: int inputted
(*
 * Description: allocates memory using malloc)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
