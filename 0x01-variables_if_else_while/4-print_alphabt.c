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
		if ((p != 'q' && p != 'e') && p <= 'z')
		{

			putchar(p);
			p++;
		}

	}
			putchar('\n');
			return (0);

}
