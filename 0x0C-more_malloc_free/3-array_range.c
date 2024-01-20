#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *@min: the first element of the array
 *@max: the last element of the array
 *
 * Return: the array
 **/
int *array_range(int min, int max)
{
	int *memb;
	int i;

	if (min > max)
		return (NULL);

	memb = malloc(sizeof(min) * (max - min));

	if (memb == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		memb[i] = min++;
	}
	return (memb);
}
