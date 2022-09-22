#include "main.h"

/**
 *rot13 - rot13 encoder
 *@s: string to be encoded
 *
 * Return: addresss of s
 */
char *rot13(char *s)
{
	int i;
	char one[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char two[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				two[s[i] - 97] : one[s[i] - 65];
		}
	}
	return (s);
}
