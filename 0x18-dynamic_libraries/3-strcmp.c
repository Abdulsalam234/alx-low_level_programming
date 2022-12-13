#include "main.h"

/**
 * _strcmp - Function that compares two string
 * @s1: First string
 * @s2: Second String
 *
 * Return: Integer value is returned
 *
 *
 **/

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, min;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		min = a;
	}
	else
	{
		min = b;
	}
	while (c <= min)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (r);
}
