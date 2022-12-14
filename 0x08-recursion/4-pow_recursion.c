#include <math.h>

/**
 * _pow_recursion - Function name
 * @x: First int
 * @y: Second int
 *
 * Return: returns value of function after execution
 **/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
