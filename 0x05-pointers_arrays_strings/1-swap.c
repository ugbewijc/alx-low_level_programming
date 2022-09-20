#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: function parameter, datatype integer, pointer 1
 * @b: function parameter, datatype interger, pointer 2
 *
 * Return: returns 0 on success
 *
 */


void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
