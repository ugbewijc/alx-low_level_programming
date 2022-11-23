#include "main.h"

/**
 *  _isupper - checks for uppercase character.
 *
 * @c: function parameter, character to check for
 *
 *
 * Return: returns 1 on success or 0 if character is not uppercase
 *
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
