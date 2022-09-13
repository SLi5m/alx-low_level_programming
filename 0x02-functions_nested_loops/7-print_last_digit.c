#include "main.h"

/**
 * print_last_digit - Prints the last didit of a number
 * @r: An integer input whose last digit will be printed
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	return (n % 10);
}
