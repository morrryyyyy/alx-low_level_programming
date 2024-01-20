#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory for an array
 *@min: the first element of the array
 *@max: the last elemnet of the array
 *
 * Return: the array
 **/
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = max - min + 1;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
