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
	char alphabet, first, second;

	first = 'e';
	second = 'q';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet == first || alphabet == second)
		continue;
	}
	putchar(alphabet);
	putchar('\n');
	return (0);
}
