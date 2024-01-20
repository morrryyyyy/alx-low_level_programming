#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *@nmemb: the number of elements in the array
 *@size: the size of each element
 *
 * Return: a void pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);
	if ((nmemb == 0) || (size == 0))
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
