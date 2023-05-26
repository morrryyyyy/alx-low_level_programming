#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int size;

	if (n > 0)
	{
		for (size = 0; size < n; size++)
			_putchar('_');
	}

	_putchar('\n');
}
