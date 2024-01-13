#include <stdio.h>

/**
 * main - prints the arguments passed to it
 *@argc: the number of arguments
 *@argv: the arguments
 *
 * Return: Always 0 (Success)
 **/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return (0);
}
