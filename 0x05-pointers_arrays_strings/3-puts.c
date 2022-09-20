#include "main.h"

/**
 * _puts - prints a string to stdout, using _putchar()
 *
 * @str:  function parameter, datatype char, inputted string to print
 *
 *
 * Return: void
 *
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
