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
	int i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
