#include <stdio.h>

/**
 * main - prints the number of arguments in the cli
 *@argc: one argumnet
 *@argv: another argument
 *
 * Return: ALways 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
