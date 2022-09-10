#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a';  low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar('\n');
	putchar('\n');

	return (0);
}
