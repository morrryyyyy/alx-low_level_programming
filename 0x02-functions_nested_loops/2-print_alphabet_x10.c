#include "main.h"

/**
 * print_alphabet_x10 - print the entire alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i, a;

	i = 0;
	a = 97;

	while (i < 10)
	{
		for (a=97; a<123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i = i + 1;
	}
}
