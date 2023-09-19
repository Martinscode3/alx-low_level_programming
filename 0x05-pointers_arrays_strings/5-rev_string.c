#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s : string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int p;

	while (s[counter] != '\n')
	counter++;

		for (p = 0; p < counter; p++)
	{
			counter--;
			rev = s[p];
			s[p] = s[counter];
			s[counter] = rev;
		}
}
