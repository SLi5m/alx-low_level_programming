#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a  string to uppercase
 * @s: an input string
 * Return: char pointer to converted string
 */

char *string_toupper(char *s)
{
	char *temp = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (temp);
}
