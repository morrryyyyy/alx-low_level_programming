#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: the frist string
 *@s2: the second string
 *
 ** Return: the difference of the strings
 **/
int _strcmp(char *s1, char *s2)
{
	while (!(*s1 == '\0' && *s2 == '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
