#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *@c: character to be checked
 *
 * Return: 1 if character is uppercase othewise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
