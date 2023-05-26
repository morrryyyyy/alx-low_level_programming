#include "main.h"

/**
 * more_numbers - prints 0 to 14 on 10 lines
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, n;

	n = 0;

	while (n < 11)
	{
		i = 0;
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
		n++;
	}
}
