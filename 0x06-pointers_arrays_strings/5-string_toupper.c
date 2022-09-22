#include "main.h"
/**
 * string_toupper - Function that converts to an uppercase letter
 * @p: String value
 * Return: Variable
 **/
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
}

