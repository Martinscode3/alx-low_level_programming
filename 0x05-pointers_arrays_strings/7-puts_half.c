#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int p, q, longi;

	longi = 0;

	for (p = 0; str[p] != '\0'; p++)
		longi++;

	q = (longi / 2);

	if ((longi % 2) == 1)
		q = ((longi + 1) / 2);

	for (p = q; str[p] != '\0'; p++)
		_putchar(str[p]);

	_putchar('\n');
}
