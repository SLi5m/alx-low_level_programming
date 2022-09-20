#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char lenp = s[0];

	while (lenp != '\0')
	{
		sum++;
		lenp = s[i++];
	}
	return (sum);
}
