#include "main.h"

/**
 * _isalpha - checks if character alphabet
 *
 * @c: function agr for charater, datatype interger
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase,
 *          otherwise, return 0
 *
 *
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90))
	|| ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	return (0);
}
