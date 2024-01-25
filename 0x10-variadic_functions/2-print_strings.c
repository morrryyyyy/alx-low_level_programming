#include "variadic_functions.h"

/**
 * print_strings - print the strings passed to it as arguments
 *@separator: the seperator of the arguments
 *@n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(str, char *);

		if (c == NULL)
			printf("nil");
		printf("%s", c);
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
