#include <stdio.h>

/**
 * main - prints tha alphabet in both ippercase and lowercase
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char upper, lower;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);

}
