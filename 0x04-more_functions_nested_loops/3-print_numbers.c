#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints all numbers from 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
