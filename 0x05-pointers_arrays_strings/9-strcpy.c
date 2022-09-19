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
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
