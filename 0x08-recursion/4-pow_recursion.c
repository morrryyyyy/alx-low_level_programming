#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 *@x: the base number
 *@y: the power
 *
 * Return: an integer
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

	return (x * (_pow_recursion(x, (y - 1))));
}
