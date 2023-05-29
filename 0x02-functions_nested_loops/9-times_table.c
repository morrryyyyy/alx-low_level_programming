#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, prod;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			prod = i * j;
			if (j == 0)
			{
				_putchar(prod + '0');
			}
			if (prod < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			j++;
		}
	_putchar('\n');
	i++;
	}
}
