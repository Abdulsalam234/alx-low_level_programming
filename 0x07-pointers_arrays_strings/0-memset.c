#include "main.h"
/**
 *_memset - fills memory with a constant byte n amount of times
 *
 *@s: pointer that has the address of the memory to fill
 *@b: fixed  byte that will be written into the momory
 *@n: amount of times the byte will be written
 *
 *Return: Prints the memory address
 **/

void *_memset(void *s, int b, size_t n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
