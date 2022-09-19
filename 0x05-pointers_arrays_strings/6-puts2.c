#include "main.h"

/**
 * puts2 - Prints a single character out of two strings.
 * @str: string name
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		putchar(str[i]);

	putchar('\n');
}
