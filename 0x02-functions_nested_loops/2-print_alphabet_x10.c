#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		int j = 97;
		{
			while (j < 123)
			{
				_putchar(j);
				j++;
			}
			_putchar(10);
			i++;
		}
	}
}
