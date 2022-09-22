#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first input string
 * @src: second input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
