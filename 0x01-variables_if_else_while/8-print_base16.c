#include<stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * description:using the main function
 * this program prints programming is positive,zero and negative
 * Return: Always 0
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
