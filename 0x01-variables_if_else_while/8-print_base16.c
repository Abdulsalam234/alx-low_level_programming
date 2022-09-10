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
	int a;
	char alphabet;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');


	return (0);
}
