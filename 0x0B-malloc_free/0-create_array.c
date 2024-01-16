#include <limits.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates and array and intializes it with a char
 *@size: the size of the array
 *@c: the first character of the array
 *
 * Return: the array
 **/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}


	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
