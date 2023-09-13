#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n: The number to be checked
 * Return: 1 for positive number -1 for negative number and 0 for anything else
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 1)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
