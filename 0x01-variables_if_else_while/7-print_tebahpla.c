#include <stdio.h>

/**
 * main - prints lowercase letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 122;

	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
