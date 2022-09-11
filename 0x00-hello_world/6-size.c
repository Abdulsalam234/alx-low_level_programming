#include<stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *
 **/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zubytes\n", sizeof(a));
	printf("Size of a int: %zubytes\n", sizeof(b));
	printf("Size of a long int: %zubytes\n", sizeof(c));
	printf("Size of a long long int: %zubytes\n", sizeof(d));
	printf("Size of a float: %zubytes\n", sizeof(e));
	return (0);
}
