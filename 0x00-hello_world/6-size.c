#include <stdio.h>

/**
 * main - Program Entry Point
 * Args: takes no args
 * Return: returns 0(success)
 * Des: C program that prints the size of various types on
 * the computer it is compiled and run on
 *
 */

int main(void)

{

	char c;
	int i;
	long int long_int;
	long long int ll_i;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll_i));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);

}
