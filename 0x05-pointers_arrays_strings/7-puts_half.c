#include <string.h>
#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: input
*Return: half of the input
*/
void puts_half(char *str)
{
	int i, leng = _strlen(str);

	for (i = ((leng - 1) / 2) + 1; i < leng; i++)
		_putchar(*(str + i));
	_putchar(10);
}
/**
 * _strlen - returns the length ofstring
 * @s: string
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*(s + leng) != '\0')
		leng++;
	return (leng);
}
