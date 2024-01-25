#include "variadic_functions.h"

/**
 * sum_them_all - adds all the arguments given to it
 *@n: the number of arguments
 *
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int x;
	va_list args;

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
