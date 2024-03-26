#include "main.h"

/**
 * _strncpy - copies a string to another string
 *@dest: destination string
 *@src: source tstring
 *@n: the number of characters to b copied
 *
 * Return: The destination string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
