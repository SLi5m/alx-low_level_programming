#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the first input string
 * @src: the second input string
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
