#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks lowercase letter
 * @c:character
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
		return (0);
}
