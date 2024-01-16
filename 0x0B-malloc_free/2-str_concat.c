#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and prints the result
 *@s1: the first string
 *@s2: the second string
 *
 * Return: the concatenated string
 **/
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *s3;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	for (l1 = 0; *s1 != '\0'; l1++)
	{

	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{

	}

	s3 = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}

for (i = 0; i < l1; i++)
{
	s3[i] = s1[i];
}
for (j = 0; j < l2; j++)
{
	s3[j + l2] = s2[j];
}
return (s3);
}
