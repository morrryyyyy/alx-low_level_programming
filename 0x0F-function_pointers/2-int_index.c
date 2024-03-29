#include "function_pointers.h"

/**
 * int_index - prints the index of an element of an array
 *@array: the array
*@size: array size
 *@cmp: a function pointer
 *
 * Return: array index or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
