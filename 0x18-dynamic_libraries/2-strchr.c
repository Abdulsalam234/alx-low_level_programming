#include "main.h"
/**
 *_strchr -Function that  locates a character in a string
 *
 *@s: HWere string addreess is stored
 *@c: character that need to be located
 *
 *Return: Return address of first occurence
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
