#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: A buffer to copy the string to.
 * @src: The string to be copied.
 *
 * Return: A pointer to the string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
