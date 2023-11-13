#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 *@s: the string to be converted
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			return (s[i]);
		}
		else
		{
			return (s[i]);
		}
	}
}
