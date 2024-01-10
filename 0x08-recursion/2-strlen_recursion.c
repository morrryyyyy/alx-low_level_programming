#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *@s: the string
 *
 * Return: The length of the string
 **/
int _strlen_recursion(char *s)
{
	int l;
	
	if (*s == '\0')
	{
		return (0);
	}


	l = _strlen_recursion(s + 1);
	return (1 + l);
}
