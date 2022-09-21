#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: function parameter, datatype string, input string to be reversed
 *
 *
 */

void rev_string(char *s)
{
	char tmp;
	int i, str_len;

	str_len = strlen(s) - 2;

	for (i = 0; i < (str_len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[str_len];
		s[str_len--] = tmp;
	}
}
