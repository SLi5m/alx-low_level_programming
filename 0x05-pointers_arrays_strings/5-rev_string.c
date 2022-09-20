#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input to reverse
 * Return: string in reverse
 */
	void rev_string(char *s)
	{
		char rev = s[0];
		int xter_counter = 0;
		int i;

		while (s[xter_counter] != '\0')
			xter_counter++;

		for (i = 0; i < xter_counter; i++)
		{
			xter_counter--;
			rev = s[i];
			s[i] = s[xter_counter];
			s[xter_counter] = rev;
		}
	}
