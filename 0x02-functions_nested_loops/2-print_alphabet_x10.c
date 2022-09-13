#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10x in lowercase,
 *
 * Returns nothing
 */
void print_alphabet_x10(void)
{
	char xter;
	int i;

	i = 0;

	while (i < 10)
	{
		xter = 'a';
		while (xter <= 'z')
		{
			_putchar(xter);
			xter++;
		}
		_putchar('\n');
		i++;
	}
}
