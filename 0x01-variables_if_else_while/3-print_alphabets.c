#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	char p;
	char P;

	p  = 'a';
	P  = 'A';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	while (P <= 'Z')
	{
		putchar(P);
		P++;
	}
		putchar('\n');
		return (0);
}


