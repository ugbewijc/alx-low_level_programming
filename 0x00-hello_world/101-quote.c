#include <unistd.h>

/**
 * main -Program Entry Point
 * Arg: takes no arguments
 * Return: returns 1 (success)
 * Description: C program that prints
 * exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 *
 */

int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
