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

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
