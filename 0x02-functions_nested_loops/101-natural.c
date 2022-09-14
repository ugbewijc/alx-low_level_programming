#include <stdio.h>

/**
 * main - Program Entry point
 *
 * Return: returns 0 (success)
 *
 * Desp: prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 *
 */

int main(void)
{
	int add, a;

	add = 0;

	for (a = 1; a < 1024; a++)
	{
		if (((a % 3) == 0) || (((a % 5) == 0)))
		{
			add += a;
		}
	}
	printf("%d\n", add);
	return (0);
}
