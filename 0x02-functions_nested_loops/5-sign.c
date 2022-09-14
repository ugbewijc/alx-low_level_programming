#include "main.h"

/**
 * print_sign  - prints the sign of a number
 *
 * @n: function agr, datatype interger
 *
 * Return: returns 1 and prints + if n is greater than zero,
 *         returns 0 and prints 0 if n is zero
 *         returns -1 and prints - if n is less than zero
 *
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	_putchar ('0');
	return (0);
}
