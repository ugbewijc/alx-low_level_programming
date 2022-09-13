#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 *
 * @c: function arg; datatype integer
 *
 * Return: returns 1 if c is lowercase, otherwise, returns 0
 *
 *
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
