#include<stdio.h>

/**
 * main - prijnts the numbers since 0 to 9
 *
 * description:using the main function
 * Return:Always(Success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
