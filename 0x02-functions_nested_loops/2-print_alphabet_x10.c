#include "main.h"
/**
 * print_alphabet -  Print all lower case alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		_putchar('\n');
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
}
