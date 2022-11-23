#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: fuction parameter, digit to check for
 *
 *  Return: 1 on success, otherwise return 0
 *
 *
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
