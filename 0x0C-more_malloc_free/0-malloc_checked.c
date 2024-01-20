#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory for a variable
 *@b: the size of the variable
 *
 * Return: a void pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *var;

	var = malloc(b);

	if (var == NULL)
		exit(98);
	return (var);
}
