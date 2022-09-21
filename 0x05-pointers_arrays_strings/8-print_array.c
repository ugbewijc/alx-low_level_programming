#include <stdio.h>
#include "main.h"

/**
 * print_array - print `n` elements of an array of integers
 *               where n is the number of elements of the array to be printed
 *               Numbers must be separated by comma, followed by a space
 *               The numbers should be displayed in the same order as they
 *               are stored in the array
 *               You are allowed to use printf()
 *
 * @a: function parameter, datatype int[], integer array
 *
 * @n:function parameter, datatype int,number of elements to be printed
 *
 *
 * Return: void
 *
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

