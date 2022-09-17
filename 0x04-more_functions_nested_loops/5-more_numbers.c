#include "main.h"
/**
 * more_numbers - function that checks for uppercase character
 * Return: 0
 */
void more_numbers(void)
{
	int a,b;

	while (b = 0; b <= 9)
	{
		while (a = 0; a <= 14)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
		b++;
		a = 0;
	}
}
