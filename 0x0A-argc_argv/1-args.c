#include <stdio.h>

/**
 * main - prints the value of argc
 *@argc: the number of arguments
 *@argv: the arguments passed
 *
 * Return: Always 0 (Success)
 **/
int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}
