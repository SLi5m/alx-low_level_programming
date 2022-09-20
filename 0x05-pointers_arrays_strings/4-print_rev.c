#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * string_count is to first count to end, num is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int string_count = 0;
	int i, num;

	for (i = 0; s[i] != '\0'; i++)
	{
		string_count++;
	}

	for (num = (string_count - 1); num >= 0; num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
