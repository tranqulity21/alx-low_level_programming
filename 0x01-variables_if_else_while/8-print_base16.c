#include<stdio.h>

/**
 * main - print if the number is positive,negative or zero
 *
 * description:using the main function
 * this program prints programming is positive,zero and negative
 * return: 0
 */
int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
