#include <stdio.h>

/**
 * main - prints all single digit numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar(10);
	return (0);
}
