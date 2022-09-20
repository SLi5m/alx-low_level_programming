#include "main.h"
/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 * Return stri
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
