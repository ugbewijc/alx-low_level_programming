#include "main.h"

/**
 * print_alphabet - function that print alphabet
 *
 * Return: void
 *
 * Description: function that prints the alphabet, in lowercase,
 * followed by a new line
 * Function Prototype: void print_alphabet(void);
 * Note: You can only use _putchar twice in your code
 *
 *
 *
 */

void print_alphabet(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; ch++)
		{
			_putchar(c);
		}
		_putchar(10);
		i++;
	}
}
