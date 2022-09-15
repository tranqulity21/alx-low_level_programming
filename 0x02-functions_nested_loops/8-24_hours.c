#include "main.h"

/**
 * jack_bauer - func that prints every minute of jack bauer's day
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_remainder;
	int mins_remainder;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			mins_remainder = mins % 10;
			hrs_remainder = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_remainder + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_remainder + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
