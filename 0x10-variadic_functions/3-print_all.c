#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format specifier
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int flag;
	char *str;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			flag = 0;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			flag = 0;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			flag = 0;
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			flag = 0;
			break;
		default:
			flag = 1;
			break;
		}
		if (format[i + 1] != '\0' && flag == 0)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
