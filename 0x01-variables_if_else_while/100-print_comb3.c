#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return o
 */
int main(void)
{
	int p;
	int c;

	for (p = 0; p <= 9; p++)
	{
		for (c = p + 1; c <= 9; c++)
		{
			putchar(p + '0');
			putchar(c + '0');

			if (p == 8 && c == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);

}
