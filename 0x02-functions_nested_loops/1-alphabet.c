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
	char starting_letter = 'a';

	while (starting_letter <= 'z')
	{
		_putchar(starting_letter);
		starting_letter++;
	}
	_putchar(10);
}
