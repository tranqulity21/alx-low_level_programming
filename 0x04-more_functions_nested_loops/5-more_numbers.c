#include "main.h"
/**
 * more_numbers - function that checks for uppercase character
 * Return: 0
 */
void more_numbers(void)
{
	int a,b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 9)
			{
				putchar(b / 10 + '0');
			}
			putchar(b % 10 + '0');
		}
		putchar(10);
	}
}
