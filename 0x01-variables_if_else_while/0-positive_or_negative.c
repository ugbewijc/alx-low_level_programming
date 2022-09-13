#include <stdio.h>
#include <time.h>

/**
 * main- Program Entry Point
 * Arg: takes no argument
 * Return: returns 0(success)
 * Description: C program that will assign a random number to the variable n
 * each time it is executed.
 * Complete the source code in order to print whether the number stored in
 * the variable n is positive or negative.
 * determing if int is positve or negative usinf ifelse
 *
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
