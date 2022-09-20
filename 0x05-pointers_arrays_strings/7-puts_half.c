#include "main.h, 2-strlen.c"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * Return: half
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = (len / 2);

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
