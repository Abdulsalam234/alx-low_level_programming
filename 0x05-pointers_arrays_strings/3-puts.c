#include "main.h"
/**
 * _puts - output a string.
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
