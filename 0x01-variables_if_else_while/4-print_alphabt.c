#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	char p;

	p = 'a';

	while (p <= 'z')
	{
		if (p == 'e')
		{
			p++;
			continue;
		}
		else if (p == 'q')
		{
			p++;
			continue;
		}
			putchar(p);
			p++;
	}

			putchar('\n');
			return (0);

}
