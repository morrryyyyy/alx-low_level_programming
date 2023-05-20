#include <stdio.h>

/**
 * main - print the entire alphabet excluding the letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
