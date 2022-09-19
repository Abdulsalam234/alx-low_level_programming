#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int first_no;

	first_no = *a;
	*a = *b;
	*b = first_no;

}
