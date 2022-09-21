#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenate a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n)
{
	int dleng = 0, i = 0;

	while (dest[dleng])
	{
		dleng++;
	}

	while (i < n && src[i])
	{
		dest[dleng] = src[i];
		dleng++;
		i++;
	}

	dest[dleng + n + 1] = '\0';

	return (dest);
}
