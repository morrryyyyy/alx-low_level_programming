#include "variadic_functions.h"

/**
 * print_numbers - print all numbers passed to it as arguments
 *@separator: the seperator of the numbers
 *@n: the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);

		printf("%d", x);
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
