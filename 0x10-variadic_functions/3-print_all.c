#include "variadic_functions.h"

/**
 * print_all - prints anything
 *@format: the format specifier
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return;

	for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;

		default:
			break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
