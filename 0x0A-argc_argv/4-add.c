#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers and prints the result
 *@argc: the number of arguments
 *@argv: the arguments
 *
 * Return: Always 0(Success)
 **/
int main(int argc, char **argv)
{
	int sum, i, j;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
