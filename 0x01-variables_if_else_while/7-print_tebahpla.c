#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char low = 'z';

	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');

	return (0);
}
