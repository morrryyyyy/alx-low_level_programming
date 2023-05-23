#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 *Return: 1 if it is positive, 0 if it is zero and -1 if it is negative
*/
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
