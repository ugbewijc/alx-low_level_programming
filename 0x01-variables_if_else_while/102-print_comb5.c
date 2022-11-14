#include <stdio.h>

/**
 * main- Program Entry Point
 *
 * Arg: takes no argument
 *
 * Return: returns 0(success)
 *
 *
 **/

int main(void)
{
	int i, k;

	for (i = 0; i < 100; i++)
	{
		for (k = 0; k < 100; k++)
		{
			if (i < k)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (i != 98 || k != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
