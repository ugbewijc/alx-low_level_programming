#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: function parameter, datatype string, input string
 *
 * Return: void
 *
 */

void print_rev(char *s)
{
	int j, len;

	len = strlen(s);

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
