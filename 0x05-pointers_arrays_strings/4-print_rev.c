#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: String
 */

void print_rev(char *s)
{
	int var = 0;

	int p;

	while (*s != '\0')
	{
		var++;
		s++;
	}
	s--;
	for (p = var; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}

