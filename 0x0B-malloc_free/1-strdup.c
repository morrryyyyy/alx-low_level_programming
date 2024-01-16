#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prints a copy of a string
 *@str: the string to be copied
 *
 * Return: the copy of the string
 **/

char *_strdup(char *str)
{
	int i, length;
	char *new_str;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != 0)
	{
		length++;
	}
	new_str = malloc(sizeof(char) * (length + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
