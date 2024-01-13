#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and pritns the result
 *@argc: the no of arguments
 *@argv: the arguments
 *
 * Return: Always 0(Success)
 **/
int main(int argc, char **argv)
{
	int i, mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	mul = 1;
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d", mul);
	putchar(10);
	return (0);
}
