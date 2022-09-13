#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Nothing to return.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
