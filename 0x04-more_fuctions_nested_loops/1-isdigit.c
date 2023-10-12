#include "main.h"

/**
 * _isdigit - checks if a character is digit
 * @c: the character to be checked
 *
 * Return: 1 (Success) else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
