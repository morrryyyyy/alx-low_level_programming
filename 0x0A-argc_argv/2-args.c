#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments to the screen
 *@argc: one prameter
 *@argv: another parameter
 *
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
