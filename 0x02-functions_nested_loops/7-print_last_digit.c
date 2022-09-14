#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: function parameter, datatype integer
 *
 * Return: value of the last integer of the arg.
 *
 *
 */

int print_last_digit(int n)
{
	int last_int = n % 10;

	if (n < 0)
	{
		last_int *= -1;
		_putchar(last_int + '0');
		return (last_int);
	}
}
