#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character
 * @str: String
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *p = str;
	int q;

	while (*p != '\0')
	{
		p++;
		longi++;
	}
		t = longi - 1;
		for (q = 0; q <= t; q++)
		{
			if (q % 2 == 0)
			{
				_putchar(str[q]);
			}
		}
				_putchar('\n');
}
