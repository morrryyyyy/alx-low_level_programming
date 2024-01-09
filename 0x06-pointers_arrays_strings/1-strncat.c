#include "main.h"

/**
 * _strncat - appends n characters from src string to dest string
 *@dest: the destination string
 *@src: the source string
 *n: the number of characters to be appended
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i + j] = src[j];
		}
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
