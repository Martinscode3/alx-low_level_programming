#include <stdio.h>
/**
 * main - Entry point
 * @sum: compute the sum of the multiple of 3 & 5
 * Return: Always rturn 0
 */

int main(void)
{
	int i = 0;
	int sum = 0;
	int limit = 1024;

	while (i < limit)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += 1;
		}
			i++;
	}
		printf("The sum of all the multiples of 3 or 5 below 1024: %d\n", sum);
		return (0);
}
