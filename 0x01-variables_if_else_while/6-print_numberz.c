#include <stdio.h>

/**
 * main - prints all single digit numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
