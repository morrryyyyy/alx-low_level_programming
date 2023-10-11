#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: the number to be checked
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
