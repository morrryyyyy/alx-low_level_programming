#include "main.h"

/**
 * print_line - prints a straight line to the output
 * @n: the length of the line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
