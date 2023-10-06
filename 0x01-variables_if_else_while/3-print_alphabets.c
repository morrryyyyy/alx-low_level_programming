#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
