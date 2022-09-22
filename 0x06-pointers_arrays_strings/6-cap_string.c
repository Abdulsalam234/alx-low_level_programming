#include "main.h"

/**
 * cap_string - Capitalizes first letter of a string
 * @s: Value of string
 *
 * Return: Prints the value of string
 **/

char *cap_string(char *s)
{
	int a = 0, i;
	int sc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < sc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}
		a++;
	}
	return (s);
}

