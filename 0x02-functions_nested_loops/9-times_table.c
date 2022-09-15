#include "main.h"
/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y, prod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			prod = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{

				_putchar('0');

			}
			else if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
