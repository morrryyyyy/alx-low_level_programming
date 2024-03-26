#include "main.h"

/**
 * _isalpha - checks if a character is lowercase or uppercase
 * @c: the character to be checked
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
