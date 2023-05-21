#include <stdio.h>

/**
 * main - prints all numbers in base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, alpha;

	n = 48;
	alpha = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (alpha < 103)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
