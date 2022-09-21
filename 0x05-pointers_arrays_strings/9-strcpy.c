#include <string.h>
#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including the terminating
 *            null byte (\0), to the buffer pointed to by dest copies
 *            the string pointed to by src
 *
 * @dest: function parameter, datatype string, destination string
 *
 * @src: function parameter, datatype string, source string
 *
 *
 * Return: the pointer to dest
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
