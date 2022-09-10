#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'Print lower and upper case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');


	return (0);
}
