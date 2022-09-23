#include "main.h"

/**
 *rot13 - rot13 encoder
 *@s: string to be encoded
 *transform_2 - helper function to map letter to rot13 encoding
 * Return: addresss of s
 */
char *rot13(char *s)
{
	int i, j;
	char one[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char two[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (one[j] == *(s + i))
			{
				*(s + i) = two[j];
				break;
			}
		}
	}
	return (s);
}
