#include <stdio.h>

/**
 * main - prints all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;

		if (x < 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
