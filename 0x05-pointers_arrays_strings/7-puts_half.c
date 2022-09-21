#include <string.h>
#include "main.h"

/**
 * puts_half - prints the second half of the string
 *
 * @str: function parameter, datatype string, input string
 *
 * Return: void
 *
 *
 */

void puts_half(char *str)
{
	int i = strlen(str);

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
