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
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
