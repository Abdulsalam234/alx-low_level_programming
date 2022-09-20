#include "main.h"

/**
 * puts2 - Prints a single character out of two strings.
 * @str: string name
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}
