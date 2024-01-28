#include "function_pointers.h"

/**
 * print_name - prints a name given to it
 *@name: the name to be printed
 *@f: the function that determines how the name will be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
