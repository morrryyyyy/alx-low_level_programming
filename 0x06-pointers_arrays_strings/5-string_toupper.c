#include "main.h"

/**
 * string_toupper - changes a string to uppercase
 *@str: the string
 *
8 Return: the string
**/
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
