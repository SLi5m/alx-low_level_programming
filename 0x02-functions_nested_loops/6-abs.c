#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @n: integer whose absolute value to be calculated
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
