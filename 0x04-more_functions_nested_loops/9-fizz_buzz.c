#include <stdio.h>

/**
 * main - prints either fizz, buzz, fizzbuzz, or an integer based on conditions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		if (num == 100)
			continue;
		printf(" ");
	i++;
	}
	printf("\n");
	return (0);
}
