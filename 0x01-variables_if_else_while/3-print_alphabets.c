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
	char alphabet, alphabet_new;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet_new = 'A'; alphabet_new <= 'Z'; alphabet_new++)
		putchar(alphabet_new);
	putchar('\n');
	return (0);
}
