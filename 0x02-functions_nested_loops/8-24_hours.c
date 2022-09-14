#include "main.h"


/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,
 *               starting from 00:00 to 23:59
 *
 * Return: void
 *
 *
 *
 */

void jack_bauer(void)
{
	int hrs_1, hrs_2, mins_1, mins_2;
	int t = 9;

	hrs_2 = 0;

	while (hrs_2 < 3)
	{
		if (hrs_2 == 2)
		{
			t = 3;
		}
		hrs_1 = 0;
		while (hrs_1 <= t)
		{
			mins_2 = 0;
			while (mins_2 < 6)
			{
				mins_1 = 0;
				while (mins_1 < 10)
				{
					_putchar('0' + hrs_2);
					_putchar('0' + hrs_1);
					_putchar(':');
					_putchar('0' + mins_2);
					_putchar('0' + mins_1);
					_putchar('\n');
					mins_1++;
				}
				mins_2++;
			}
			hrs_1++;
		}
		hrs_2++;
	}
}
