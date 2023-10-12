#include "main.h"

/**
 * print_most_numbers - prints from 0 through 9 excluding some
 */
void print_most_numbers(void)
{
	char num[9] = "01356789";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(num[i]);
	}
	_putchar(10);
}
