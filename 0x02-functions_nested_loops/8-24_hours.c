#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack bauer
 * Return: ...
 */

void jack_bauer(void)
{
	int p, q, s, t;

	for (p = 0; p <= 2; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			if ((p <= 1 && q <= 9) || (p <= 2 && q <= 3))
			{
				for (s = 0; s <= 5; s++)
				{
					for (t = 0; t <= 9; t++)
					{
						_putchar(p + '0');
						_putchar(q + '0');
						_putchar(':');
						_putchar(s + '0');
						_putchar(t + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
