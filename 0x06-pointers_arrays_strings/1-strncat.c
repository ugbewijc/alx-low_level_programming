#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings, it will use at most n bytes from src;
 *            and src does not need to be null-terminated if it contains n or
 *            more bytes
 *
 * @src: function parameter, datatype char[]
 *
 * @dest: function parameter, datatype char[]
 *
 * @n: fuction parameter, datatype int
 *
 *
 * Return: a pointer to the resulting string dest
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
