#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints  a grid
 *@width: grid width
 *@height: grid height
 *
 * Return: the grid
 **/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(arr[k]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
